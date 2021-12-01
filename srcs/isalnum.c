#include "ustr.h"
#include "self.h"

int ustr_isalnum(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if ((STR(str)[i] < 'a' || STR(str)[i] > 'z') &&
            (STR(str)[i] < 'A' || STR(str)[i] > 'Z') &&
            (STR(str)[i] < '0' || STR(str)[i] > '9'))
            return 0;
    return 1;
}
