#include "ustr.h"
#include "self.h"

ustr_s ustr_set(ustr_p dst, ustr_sp src)
{
    ustr_realloc(dst, LEN(src) + 1);

    def_cpy(STR(dst), STR(src), LEN(src) + 1);
    LEN(dst) = LEN(src);

    return LEN(src);
}
