#include "ustr.h"
#include "self.h"

void ustr_anchor(ustr_p str1, ustr_p str2)
{
    STR(str1) = STR(str2);
    LEN(str1) = LEN(str2);
    SIZ(str1) = SIZ(str2);
}
