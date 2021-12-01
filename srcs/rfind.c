#include "ustr.h"
#include "self.h"

ustrpos_s ustr_rfind(ustr_sp str, ustr_sp substr)
{
    ustrpos_s last = LEN(substr) - 1;

    ustrpos_s i;
    for (i = LEN(str) - 1; i >= 0; i--)
        if (STR(str)[i] == STR(substr)[last])
        {
            i--;
            ustrpos_s j;
            for (j = last - 1; j >= 0 && i >= 0; i--, j--)
                if (STR(str)[i] != STR(substr)[j])
                    break;

            if (j == -1)
                return i + 1;
        }

    return -1;
}
