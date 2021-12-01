#include "ustr.h"

ustr_s ustr_niniset(ustr_p dst, ustr_sp src, ustr_s count)
{
    ustr_init(dst);
    return ustr_nset(dst, src, count);
}
