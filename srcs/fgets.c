#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_fgets(ustr_p str, ustr_s size, FILE *stream)
{
    ustr_realloc(str, size + 1);

    fgets(STR(str), size, stream);
    LEN(str) = strlen(STR(str));

    ustr_rem_char(str, str, -1);

    return LEN(str);
}
