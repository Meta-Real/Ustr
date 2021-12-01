#include "ustr.h"

ustr_s ustr_iniset_str(ustr_p dst, const char *src)
{
    ustr_init(dst);
    return ustr_set_str(dst, src);
}
