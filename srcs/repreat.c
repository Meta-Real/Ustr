#include "ustr.h"
#include "self.h"

ustr_s ustr_repeat(ustr_p res, ustr_sp str, ustr_s count)
{
    if (!count)
    {
        ustr_realloc(res, 1);

        *STR(res) = '\0';
        LEN(res) = 0;

        return LEN(res);
    }

    if (count == 1)
    {
        ustr_realloc(res, LEN(str) + 1);

        def_cpy(STR(res), STR(str), LEN(str) + 1);
        LEN(res) = LEN(str);

        return LEN(res);
    }

    LEN(res) = LEN(str) * count;

    ustr_realloc(res, LEN(res) + 1);

    ustr_s i;
    for (i = 0; i < count; i++)
        def_cpy(STR(res) + LEN(str) * i, STR(str), LEN(str));
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
