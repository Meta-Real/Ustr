#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_ltrim_str(ustr_p res, ustr_sp str, const char *trims)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (!strchr(trims, STR(str)[i]))
            break;

    LEN(res) = LEN(str) - i;

    ustr_realloc(res, LEN(res) + 1);

    def_cpy(STR(res), STR(str) + i, LEN(res));
    STR(res)[LEN(res)] = '\0';

    return LEN(res);
}
