#include "ustr.h"
#include "self.h"

void ustr_puts(ustr_sp str, char end)
{
    ustr_fputs(str, end, stdin);
}
