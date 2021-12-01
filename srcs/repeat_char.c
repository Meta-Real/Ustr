#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_repeat_char(ustr_p res, char chr, ustr_s count)
{
    if (!count)
    {
        ustr_realloc(res, 1);

        *STR(res) = '\0';
        LEN(res) = 0;

        return LEN(res);
    }

    ustr_realloc(res, count + 1);

    memset(STR(res), chr, count);
    STR(res)[count] = '\0';
    LEN(res) = count;

    return LEN(res);
}
