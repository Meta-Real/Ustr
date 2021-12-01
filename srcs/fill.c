#include <string.h>

#include "ustr.h"
#include "self.h"

ustr_s ustr_fill(ustr_p res, ustr_sp str, char chr, ustr_s count)
{
    if (LEN(str) >= count)
        return 0;

    ustr_realloc(res, count + 1);
    LEN(res) = count;

    count -= LEN(str);

    char *fill = def_malloc(count + 1);
    memset(fill, chr, count);
    fill[count] = '\0';

    def_cpy(STR(res), fill, count);
    def_cpy(STR(res) + count, STR(res), LEN(str));

    return count;
}
