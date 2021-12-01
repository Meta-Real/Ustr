#include "ustr.h"
#include "self.h"

void ustr_swap(ustr_p str1, ustr_p str2)
{
    char *tmp_str = STR(str1);
    STR(str1) = STR(str2);
    STR(str2) = tmp_str;

    ustr_s tmp_len = LEN(str1);
    LEN(str1) = LEN(str2);
    LEN(str2) = tmp_len;

    ustr_s tmp_size = SIZ(str1);
    SIZ(str1) = SIZ(str2);
    SIZ(str2) = tmp_size;
}
