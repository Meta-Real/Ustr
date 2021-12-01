#include "ustr.h"
#include "self.h"

ustr_s ustr_trim_char(ustr_p res, ustr_sp str, char trim)
{
    ustrpos_s i, j;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] != trim)
            break;
    for (j = LEN(str) - 1; j > i; j--)
        if (STR(str)[j] != trim)
            break;
    j++;

    LEN(res) = j - i;

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str) + i, LEN(res));
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
