#include "ustr.h"
#include "self.h"

void ustr_reverse(ustr_p res, ustr_sp str)
{
    ustr_realloc(res, LEN(str) + 1);
    LEN(res) = LEN(str);

    ustrpos_s i, j;
    for (i = 0, j = LEN(res) - 1; i < LEN(res); i++, j++)
        STR(res)[i] = STR(str)[j];
    STR(res)[LEN(res)] = '\0';
}
