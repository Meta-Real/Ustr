#include "ustr.h"
#include "self.h"

void ustr_init(ustr_p str)
{
    STR(str) = NULL;
    LEN(str) = 0;
    SIZ(str) = 0;
}
