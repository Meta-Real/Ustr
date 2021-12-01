#include <string.h>

#include "ustr.h"
#include "self.h"

int ustr_oncmp_str(ustr_sp str1, const char *str2, ustr_s offset, ustr_s count)
{
    if (offset >= LEN(str1))
        return -1;
    if (offset >= strlen(str2))
        return 1;

    count += offset;

    ustrpos_s i;
    for (i = offset; i < count &&
                STR(str1)[i] == str2[i] &&
                STR(str1)[i] != '\0' && str2[i] != '\0'; i++);

    return STR(str1)[i] - str2[i];
}
