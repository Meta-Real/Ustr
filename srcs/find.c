#include "ustr.h"
#include "self.h"

ustrpos_s ustr_find(ustr_sp str, ustr_sp substr)
{
    ustrpos_s i;
    for (i = 0; i < LEN(str); i++)
        if (STR(str)[i] == *STR(substr))
        {
            ustrpos_s pos = i;

            i++;
            ustrpos_s j;
            for (j = 1; j < LEN(substr) && i < LEN(str); i++, j++)
                if (STR(str)[i] != STR(substr)[j])
                {
                    pos = -1;
                    break;
                }

            if (pos != -1)
                return pos;
        }

    return -1;
}
