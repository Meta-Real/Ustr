#include <string.h>

#include "ustr.h"
#include "self.h"

ustrpos_s ustr_find_str(ustr_sp str, const char *substr)
{
    ustr_s substr_l = strlen(substr);

    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == *substr)
        {
            ustrpos_s pos = i;

            i++;
            ustrpos_s j;
            for (j = 1; j < substr_l && i < LEN(str); i++, j++)
                if (STR(str)[i] != substr[j])
                {
                    pos = -1;
                    break;
                }

            if (pos != -1)
                return pos;
        }

    return -1;
}
