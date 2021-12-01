#include <string.h>

#include "ustr.h"
#include "self.h"

ustrpos_s ustr_rfind_str(ustr_sp str, const char *substr)
{
    ustr_s substr_l = strlen(substr);
    ustrpos_s last = substr_l - 1;

    ustrpos_s i;
    for (i = LEN(str) - 1; i >= 0; i--)
        if (STR(str)[i] == substr[last])
        {
            i--;
            ustrpos_s j;
            for (j = last - 1; j >= 0 && i >= 0; i--, j--)
                if (STR(str)[i] != substr[j])
                    break;

            if (j == -1)
                return i + 1;
        }

    return -1;
}
