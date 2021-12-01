#include "ustr.h"
#include "self.h"

ustr_s ustr_count_char(ustr_sp str, char chr)
{
    ustr_s count = 0;

    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == chr)
            count++;

    return count;
}
