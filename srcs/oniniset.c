#include "ustr.h"
#include "self.h"

ustr_s ustr_oniniset(ustr_p dst, ustr_sp src, ustrpos_s offset, ustr_s count)
{
    ustr_init(dst);
    return ustr_onset(dst, src, offset, count);
}
