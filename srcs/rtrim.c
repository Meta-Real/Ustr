#include "ustr.h"
#include "self.h"

ustr_s ustr_rtrim(ustr_p res, ustr_sp str, ustr_sp trims)
{
    ustrpos_s j;
    for (j = LEN(str) - 1; j >= 0; j--)
        if (!ustr_have_char(trims, STR(str)[j]))
            break;
    j++;

    ustr_realloc(res, j + 1);

    def_cpy(STR(res), STR(str), j);
    STR(res)[j] = '\0';
    LEN(res) = j;

    return j;
}
