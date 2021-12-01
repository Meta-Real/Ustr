#include "ustr.h"
#include "self.h"

ustr_s ustr_onset(ustr_p dst, ustr_sp src, ustrpos_s offset, ustr_s count)
{
    if (offset < 0)
        offset += LEN(src);

    if (offset > LEN(src) - 1 || offset < 0)
    {
        ustr_realloc(dst, 1);

        *STR(dst) = '\0';
        LEN(dst) = 0;

        return LEN(dst);
    }

    if (count + offset > LEN(src))
        count = LEN(src) - offset;

    ustr_realloc(dst, count + 1);
    LEN(dst) = count;

    def_cpy(STR(dst), STR(src) + offset, count);
    STR(dst)[count] = '\0';

    return count;
}
