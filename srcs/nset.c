#include "ustr.h"
#include "self.h"

ustr_s ustr_nset(ustr_p dst, ustr_sp src, ustr_s count)
{
    if (count > LEN(src))
        return ustr_set(dst, src);

    ustr_realloc(dst, count + 1);

    def_cpy(STR(dst), STR(src), count);
    STR(dst)[count] = '\0';
    LEN(dst) = count;

    return LEN(dst);
}
