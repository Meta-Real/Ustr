#include <string.h>

#include "ustr.h"
#include "self.h"

int ustr_have_str(ustr_sp str, const char *substr)
{
    ustr_s substr_l = strlen(substr);

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
                return 1;
        }

    return 0;
}
