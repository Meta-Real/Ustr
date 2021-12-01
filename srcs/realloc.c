#include "ustr.h"
#include "self.h"

void ustr_realloc(ustr_p str, ustr_s size)
{
    if (SIZ(str) != size)
    {
        STR(str) = def_realloc(STR(str), size);
        SIZ(str) = size;
    }
}
