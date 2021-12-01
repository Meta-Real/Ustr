#include "ustr.h"
#include "self.h"

char *ustr_oget_str(ustr_sp src, ustrpos_s offset)
{
    if (offset < 0)
        offset += LEN(src);

    if (offset > LEN(src) - 1 || offset < 0)
        return NULL;

    ustr_s str_l = LEN(src) - offset;
    char *str = def_malloc(str_l + 1);

    def_cpy(str, STR(src) + offset, str_l);
    str[str_l] = '\0';

    return str;
}
