#include "ustr.h"

ustr_s ustr_oiniset(ustr_p dst, ustr_sp src, ustrpos_s offset)
{
    ustr_init(dst);
    return ustr_oset(dst, src, offset);
}
