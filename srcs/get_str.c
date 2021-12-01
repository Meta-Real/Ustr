#include "ustr.h"
#include "self.h"

char *ustr_get_str(ustr_sp src)
{
    char *dst = def_malloc(LEN(src) + 1);

    def_cpy(dst, STR(src), LEN(src) + 1);

    return dst;
}
