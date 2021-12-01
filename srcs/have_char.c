#include "ustr.h"
#include "self.h"

int ustr_have_char(ustr_sp str, char chr)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == chr)
            return 1;

    return 0;
}
