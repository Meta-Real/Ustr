#include "ustr.h"
#include "self.h"

ustr_s ustr_count(ustr_sp str, ustr_sp substr)
{
    ustr_s count = 0;

    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == *STR(substr))
        {
            int add_c = 1;

            i++;
            ustrpos_s j;
            for (j = 1; j < LEN(substr) && i < LEN(str); i++, j++)
                if (STR(str)[i] != STR(substr)[j])
                {
                    add_c = 0;
                    break;
                }

            if (add_c)
                count++;
        }

    return count;
}
