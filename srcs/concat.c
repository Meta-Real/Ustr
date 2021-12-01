#include "ustr.h"
#include "self.h"

ustr_s ustr_concat(ustr_p res, ustr_sp str1, ustr_sp str2)
{
    LEN(res) = LEN(str1) + LEN(str2);

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str1), LEN(str1));
    def_cpy(STR(res) + LEN(str1), STR(str2), LEN(str2) + 1);

    return LEN(res);
}
