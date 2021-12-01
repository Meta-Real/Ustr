#include "ustr.h"
#include "self.h"

void ustr_fputs(ustr_sp str, char end, FILE *stream)
{
    if (stream != stdin)
    {
        fprintf(stream, "%s%c", STR(str), end);
        return;
    }
    printf("%s%c", STR(str), end);
}
