#include "ustr.h"
#include "self.h"

ustr_s ustr_iniset_char(ustr_p dst, char src)
{
    ustr_init(dst);
    return ustr_set_char(dst, src);
}
