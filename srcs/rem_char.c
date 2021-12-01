#include "ustr.h"
#include "self.h"

ustr_s ustr_rem_char(ustr_p res, ustr_sp str, ustrpos_s offset)
{
    if (offset < 0)
        offset += LEN(str);

    if (offset > LEN(str) - 1 || offset < 0)
    {
        ustr_set(res, str);
        return LEN(res);
    }

    ustr_realloc(res, LEN(str));

    def_cpy(STR(res), STR(str), offset);
    def_cpy(STR(res) + offset, STR(str) + offset + 1, LEN(str) - offset);
    LEN(res) = LEN(str) - 1;

    return LEN(res);
}
