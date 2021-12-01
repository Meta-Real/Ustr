#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_set_str(ustr_p dst, const char *src)
{
    ustr_s len = strlen(src);
    ustr_realloc(dst, len + 1);

    def_cpy(STR(dst), src, len + 1);
    LEN(dst) = len;

    return len;
}
