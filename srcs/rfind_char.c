#include "ustr.h"
#include "self.h"

ustrpos_s ustr_rfind_char(ustr_sp str, char chr)
{
    ustrpos_s i;
    for (i = LEN(str) - 1; i >= 0; i--)
        if (STR(str)[i] == chr)
            return i;

    return -1;
}
