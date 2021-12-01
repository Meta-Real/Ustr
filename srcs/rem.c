#include "ustr.h"
#include "self.h"

ustr_s ustr_rem(ustr_p res, ustr_sp str, ustrpos_s offset, ustr_s count)
{
    if (offset < 0)
        offset += LEN(str);

    if (offset > LEN(str) - 1 || offset < 0)
    {
        ustr_set(res, str);
        return LEN(res);
    }

    if (offset + count > LEN(str) - 1)
    {
        ustr_realloc(res, offset + 1);

        def_cpy(STR(res), STR(str), offset);
        STR(res)[offset] = '\0';
        LEN(res) = offset;
    }
    else
    {
        LEN(res) = LEN(str) - count;

        ustr_realloc(res, LEN(res) + 1);

        def_cpy(STR(res), STR(str), offset);
        def_cpy(STR(res) + offset, STR(str) + offset + count, LEN(res) + 1 - offset);
    }

    return LEN(res);
}
