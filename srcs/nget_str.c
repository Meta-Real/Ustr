#include "ustr.h"
#include "self.h"

char *ustr_nget_str(ustr_sp src, ustr_s count)
{
    if (count >= LEN(src))
        return ustr_get_str(src);

    char *str = def_malloc(count + 1);

    def_cpy(str, STR(src), count);
    str[count] = '\0';

    return str;
}
