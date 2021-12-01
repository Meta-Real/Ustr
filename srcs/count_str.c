#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_count_str(ustr_sp str, const char *substr)
{
    ustr_s substr_l = strlen(substr);
    ustr_s count = 0;

    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == *substr)
        {
            int add_c = 1;

            i++;
            ustrpos_s j;
            for (j = 1; j < substr_l && i < LEN(str); i++, j++)
                if (STR(str)[i] != substr[j])
                {
                    add_c = 0;
                    break;
                }

            if (add_c)
                count++;
        }

    return count;
}
