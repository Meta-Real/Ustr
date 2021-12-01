#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_nset_str(ustr_p dst, const char *src, ustr_s count)
{
    ustr_s src_l = strlen(src);

    if (count > src_l)
        count = src_l;

    ustr_realloc(dst, count + 1);

    def_cpy(STR(dst), src, count);
    STR(dst)[count] = '\0';
    LEN(dst) = count;

    return LEN(dst);
}
