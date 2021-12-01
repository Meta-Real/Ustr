#include "ustr.h"
#include "self.h"

void ustr_free(ustr_p str)
{
    if (STR(str))
    {
        def_free(STR(str));
        LEN(str) = 0;
        SIZ(str) = 0;
    }
}
