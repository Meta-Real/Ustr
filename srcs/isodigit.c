#include "ustr.h"
#include "self.h"

int ustr_isodigit(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] < '0' || STR(str)[i] > '7')
            return 0;
    return 1;
}
