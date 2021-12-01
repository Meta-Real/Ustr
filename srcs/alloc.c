#include "ustr.h"
#include "self.h"

void ustr_alloc(ustr_p str, ustr_s size)
{
    if (!STR(str))
    {
        STR(str) = def_malloc(size);
        SIZ(str) = size;
    }
}
