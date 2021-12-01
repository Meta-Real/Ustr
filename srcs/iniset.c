#include "ustr.h"

ustr_s ustr_iniset(ustr_p dst, ustr_sp src)
{
    ustr_init(dst);
    return ustr_set(dst, src);
}
