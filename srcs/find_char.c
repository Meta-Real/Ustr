#include "ustr.h"
#include "self.h"

ustrpos_s ustr_find_char(ustr_sp str, char chr)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == chr)
            return i;

    return -1;
}
