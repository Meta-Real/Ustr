#include "ustr.h"
#include "self.h"

char ustr_get_char(ustr_sp src)
{
    return *STR(src);
}
