#include <stdarg.h>

#include "ustr.h"

void ustr_inits(ustr_p str, ...)
{
    va_list ap;
    va_start(ap, str);

    ustr_p i = str;
    while (i)
    {
        ustr_init(i);
        i = va_arg(ap, ustr_p);
    }

    va_end(ap);
}
