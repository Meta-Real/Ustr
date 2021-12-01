#include "ustr.h"
#include "self.h"

int ustr_isupper(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] < 'A' || STR(str)[i] > 'Z')
            return 0;
    return 1;
}
