#include "ustr.h"
#include "self.h"

int ustr_have(ustr_sp str, ustr_sp substr)
{
    if (!LEN(substr))
        return 1;

    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == *STR(substr))
        {
            int add_c = 1;

            ustrpos_s j;
            for (j = 1; j < LEN(substr) && i < LEN(str); j++)
            {
                if (STR(str)[++i] != STR(substr)[j])
                {
                    add_c = 0;
                    break;
                }
            }

            if (add_c)
                return 1;

            i--;
        }

    return 0;
}
