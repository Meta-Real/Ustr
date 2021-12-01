#include "ustr.h"
#include "self.h"

int ustr_cmp_str(ustr_sp str1, const char *str2)
{
    ustrpos_s i;
    for (i = 0; STR(str1)[i] == str2[i] &&
                STR(str1)[i] != '\0' && str2[i] != '\0'; i++);

    return STR(str1)[i] - str2[i];
}
