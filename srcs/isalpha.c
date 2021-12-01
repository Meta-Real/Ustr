#include "ustr.h"
#include "self.h"

int ustr_isalpha(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if ((STR(str)[i] < 'a' || STR(str)[i] > 'z') &&
            (STR(str)[i] < 'A' || STR(str)[i] > 'Z'))
            return 0;
    return 1;
}
