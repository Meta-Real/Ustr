#include "ustr.h"
#include "self.h"

ustr_s ustr_set_char(ustr_p dst, char src)
{
    ustr_realloc(dst, 2);

    *STR(dst) = src;
    STR(dst)[1] = '\0';
    LEN(dst) = 1;

    return LEN(dst);
}
