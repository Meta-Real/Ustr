#include "ustr.h"
#include "self.h"

ustr_s ustr_gets(ustr_p str, ustr_s size)
{
    return ustr_fgets(str, size, stdin);
}
