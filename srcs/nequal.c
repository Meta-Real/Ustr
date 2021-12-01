#include "ustr.h"
#include "self.h"

int ustr_nequal(ustr_sp str1, ustr_sp str2)
{
    if (LEN(str1) != LEN(str2))
        return 1;

    ustrpos_s i = 0;
    while (i < LEN(str1))
        if (STR(str1)[i] != STR(str2)[i++])
            return 1;
    return 0;
}
