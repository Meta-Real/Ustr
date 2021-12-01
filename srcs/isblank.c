#include "ustr.h"
#include "self.h"

int ustr_isblank(ustr_sp str)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] != '\t' && STR(str)[i] != ' ')
            return 0;
    return 1;
}
