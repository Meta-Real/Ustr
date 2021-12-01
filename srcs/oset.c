#include "ustr.h"
#include "self.h"

ustr_s ustr_oset(ustr_p dst, ustr_sp src, ustrpos_s offset)
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

    LEN(dst) = LEN(src) - offset;
    ustr_realloc(dst, LEN(dst) + 1);

    def_cpy(STR(dst), STR(src) + offset, LEN(src) + 1);

    return LEN(dst);
}
