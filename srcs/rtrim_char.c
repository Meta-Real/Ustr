#include "ustr.h"
#include "self.h"

ustr_s ustr_rtrim_char(ustr_p res, ustr_sp str, char trim)
{
    ustrpos_s j;
    for (j = LEN(str) - 1; j >= 0; j--)
        if (STR(str)[j] != trim)
            break;
    j++;

    ustr_realloc(res, j + 1);

    def_cpy(STR(res), STR(str), j);
    STR(res)[j] = '\0';
    LEN(res) = j;

    return j;
}
