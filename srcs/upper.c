#include "ustr.h"
#include "self.h"

void ustr_upper(ustr_p res, ustr_sp str)
{
    ustr_realloc(res, LEN(str) + 1);
    LEN(res) = LEN(str);

    ustr_s i;
    for (i = 0; i < LEN(res); i++)
    {
        if (STR(str)[i] >= 'a' && STR(str)[i] <= 'z')
            STR(res)[i] = STR(str)[i] - 32;
        else
            STR(res)[i] = STR(str)[i];
    }
    STR(res)[LEN(res)] = '\0';
}
