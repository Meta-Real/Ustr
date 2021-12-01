#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_repeat_str(ustr_p res, const char *str, ustr_s count)
{
    if (!count)
    {
        ustr_realloc(res, 1);

        *STR(res) = '\0';
        LEN(res) = 0;

        return LEN(res);
    }

    ustr_s str_l = strlen(str);

    if (count == 1)
    {
        ustr_realloc(res, str_l + 1);

        def_cpy(STR(res), str, str_l + 1);
        LEN(res) = str_l;

        return LEN(res);
    }

    LEN(res) = str_l * count;

    ustr_realloc(res, LEN(res) + 1);

    ustr_s i;
    for (i = 0; i < count; i++)
        def_cpy(STR(res) + str_l * i, str, str_l);
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
