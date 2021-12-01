#include "ustr.h"
#include "self.h"

int ustr_cmp(ustr_sp str1, ustr_sp str2)
{
    ustrpos_s i;
    for (i = 0; STR(str1)[i] == STR(str2)[i] &&
                STR(str1)[i] != '\0' && STR(str2)[i] != '\0'; i++);

    return STR(str1)[i] - STR(str2)[i];
}
