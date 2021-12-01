#include <stdarg.h>

#include "ustr.h"

void ustr_frees(ustr_p str, ...)
{
    va_list ap;
    va_start(ap, str);

    ustr_p i = str;
    while (i)
    {
        ustr_free(i);
        i = va_arg(ap, ustr_p);
    }

    va_end(ap);
}
