#include "ustr.h"
#include "self.h"

ustr_s ustr_concat_char(ustr_p res, ustr_sp str1, char chr)
{
    LEN(res) = LEN(str1) + 1;

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str1), LEN(str1));
    STR(res)[LEN(str1)] = chr;
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
