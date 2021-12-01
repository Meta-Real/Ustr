#include "ustr.h"
#include "self.h"

int ustr_isxdigit(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if ((STR(str)[i] < '0' || STR(str)[i] > '9') &&
            (STR(str)[i] < 'a' || STR(str)[i] > 'f'))
            return 0;
    return 1;
}
