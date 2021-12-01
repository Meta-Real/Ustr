#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_concat_str(ustr_p res, ustr_sp str1, const char *str2)
{
    ustr_s str2_l = strlen(str2);
    LEN(res) = LEN(str1) + str2_l;

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str1), LEN(str1));
    def_cpy(STR(res) + LEN(str1), str2, str2_l + 1);

    return LEN(res);
}
