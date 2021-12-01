#include "ustr.h"
#include "self.h"

ustr_s ustr_trim(ustr_p res, ustr_sp str, ustr_sp trims)
{
    ustrpos_s i, j;
    for (i = 0; i < LEN(str); i++)
        if (!ustr_have_char(trims, STR(str)[i]))
            break;
    for (j = LEN(str) - 1; j > i; j--)
        if (!ustr_have_char(trims, STR(str)[j]))
            break;
    j++;

    LEN(res) = j - i;

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str) + i, LEN(res));
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
