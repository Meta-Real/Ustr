#include "ustr.h"

ustr_s ustr_niniset_str(ustr_p dst, const char *src, ustr_s count)
{
    ustr_init(dst);
    return ustr_nset_str(dst, src, count);
}
