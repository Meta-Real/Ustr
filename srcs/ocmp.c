#include "ustr.h"
#include "self.h"

int ustr_ocmp(ustr_sp str1, ustr_sp str2, ustr_s offset)
{
    if (offset >= LEN(str1))
        return -1;
    if (offset >= LEN(str2))
        return 1;

    ustrpos_s i;
    for (i = offset; STR(str1)[i] == STR(str2)[i] &&
                     STR(str1)[i] != '\0' && STR(str2)[i] != '\0'; i++);

    return STR(str1)[i] - STR(str2)[i];
}
