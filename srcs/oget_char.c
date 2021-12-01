#include "ustr.h"
#include "self.h"

char ustr_oget_char(ustr_sp src, ustrpos_s offset)
{
    if (offset < 0)
        offset += LEN(src);

    if (offset > LEN(src) - 1 || offset < 0)
        return '\0';

    return STR(src)[offset];
}
