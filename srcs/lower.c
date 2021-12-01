#include "ustr.h"
#include "self.h"

void ustr_lower(ustr_p res, ustr_sp str)
{
    ustr_realloc(res, LEN(str) + 1);
    LEN(res) = LEN(str);

    ustr_s i;
    for (i = 0; i < LEN(res); i++)
    {
        if (STR(str)[i] >= 'A' && STR(str)[i] <= 'Z')
            STR(res)[i] = STR(str)[i] + 32;
        else
            STR(res)[i] = STR(str)[i];
    }
    STR(res)[LEN(res)] = '\0';
}
