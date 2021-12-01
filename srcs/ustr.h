#ifndef __USTR__
#define __USTR__

#include <stdio.h>

typedef unsigned long long ustr_s;
typedef signed long long ustrpos_s;

struct __ustr__
{
    char *_str;
    ustr_s _len;
    ustr_s _size;
};

typedef struct __ustr__ ustr_t[1];
typedef struct __ustr__ *ustr_p;
typedef const struct __ustr__ *ustr_sp;

/* init functions */

void ustr_init(ustr_p str);
void ustr_inits(ustr_p str, ...);

void ustr_free(ustr_p str);
void ustr_frees(ustr_p str, ...);

void ustr_alloc(ustr_p str, ustr_s size);
void ustr_realloc(ustr_p str, ustr_s size);

/* set functions */

ustr_s ustr_set(ustr_p dst, ustr_sp src);
ustr_s ustr_set_str(ustr_p dst, const char *src);
ustr_s ustr_set_char(ustr_p dst, char src);

ustr_s ustr_nset(ustr_p dst, ustr_sp src, ustr_s count);
ustr_s ustr_nset_str(ustr_p dst, const char *src, ustr_s count);

ustr_s ustr_oset(ustr_p dst, ustr_sp src, ustrpos_s offset);

ustr_s ustr_onset(ustr_p dst, ustr_sp src, ustrpos_s offset, ustr_s count);

void ustr_anchor(ustr_p str1, ustr_p str2);
void ustr_swap(ustr_p str1, ustr_p str2);

/* init and set functions (combined) */

ustr_s ustr_iniset(ustr_p dst, ustr_sp src);
ustr_s ustr_iniset_str(ustr_p dst, const char *src);
ustr_s ustr_iniset_char(ustr_p dst, char src);

ustr_s ustr_niniset(ustr_p dst, ustr_sp src, ustr_s count);
ustr_s ustr_niniset_str(ustr_p dst, const char *src, ustr_s count);

ustr_s ustr_oiniset(ustr_p dst, ustr_sp src, ustrpos_s offset);

ustr_s ustr_oniniset(ustr_p dst, ustr_sp src, ustrpos_s offset, ustr_s count);

/* get functions */

char *ustr_get_str(ustr_sp src);
char ustr_get_char(ustr_sp src);

char *ustr_nget_str(ustr_sp src, ustr_s count);

char *ustr_oget_str(ustr_sp src, ustrpos_s offset);
char ustr_oget_char(ustr_sp src, ustrpos_s offset);

char *ustr_onget_str(ustr_sp src, ustrpos_s offset, ustr_s count);//

/* modify functions */

ustr_s ustr_concat(ustr_p res, ustr_sp str1, ustr_sp str2);
ustr_s ustr_concat_str(ustr_p res, ustr_sp str1, const char *str2);
ustr_s ustr_concat_char(ustr_p res, ustr_sp str1, char chr);

ustr_s ustr_rem(ustr_p res, ustr_sp str, ustrpos_s offset, ustr_s count);
ustr_s ustr_rem_char(ustr_p res, ustr_sp str, ustrpos_s offset);

ustr_s ustr_repeat(ustr_p res, ustr_sp str, ustr_s count);
ustr_s ustr_repeat_str(ustr_p res, const char *str, ustr_s count);
ustr_s ustr_repeat_char(ustr_p res, char chr, ustr_s count);

ustr_s ustr_replace(ustr_p res, ustr_sp str, ustr_sp oldstr, ustr_sp newstr);//
ustr_s ustr_replace_str(ustr_p res, ustr_sp str, const char *oldstr, const char *newstr);//
ustr_s ustr_replace_char(ustr_p res, ustr_sp str, char oldstr, char newstr);//

ustr_s ustr_nreplace(ustr_p res, ustr_sp str, ustr_sp oldstr, ustr_sp newstr, ustr_s count);//
ustr_s ustr_nreplace_str(ustr_p res, ustr_sp str, const char *oldstr, const char *newstr, ustr_s count);//
ustr_s ustr_nreplace_char(ustr_p res, ustr_sp str, char oldstr, char newstr, ustr_s count);//

ustr_s ustr_fill(ustr_p res, ustr_sp str, char chr, ustr_s count);
ustr_s ustr_rfill(ustr_p res, ustr_sp str, char chr, ustr_s count);

void ustr_reverse(ustr_p res, ustr_sp str);

void ustr_upper(ustr_p res, ustr_sp str);
void ustr_lower(ustr_p res, ustr_sp str);

/* split functions */

ustr_s ustr_split(ustr_p *substrs, ustr_sp str, char split);//

ustr_s ustr_divide(ustr_p *substrs, ustr_sp str, ustr_s size);//
ustr_s ustr_ndivide(ustr_p *substrs, ustr_sp str, ustr_s count);//

/* trim functions */

ustr_s ustr_trim(ustr_p res, ustr_sp str, ustr_sp trims);
ustr_s ustr_trim_str(ustr_p res, ustr_sp str, const char *trims);
ustr_s ustr_trim_char(ustr_p res, ustr_sp str, char trim);

ustr_s ustr_ltrim(ustr_p res, ustr_sp str, ustr_sp trims);
ustr_s ustr_ltrim_str(ustr_p res, ustr_sp str, const char *trims);
ustr_s ustr_ltrim_char(ustr_p res, ustr_sp str, char trim);

ustr_s ustr_rtrim(ustr_p res, ustr_sp str, ustr_sp trims);
ustr_s ustr_rtrim_str(ustr_p res, ustr_sp str, const char *trims);
ustr_s ustr_rtrim_char(ustr_p res, ustr_sp str, char trim);

/* count functions */

ustr_s ustr_count(ustr_sp str, ustr_sp substr);
ustr_s ustr_count_str(ustr_sp str, const char *substr);
ustr_s ustr_count_char(ustr_sp str, char chr);

/* find functions */

int ustr_have(ustr_sp str, ustr_sp substr);
int ustr_have_str(ustr_sp str, const char *substr);
int ustr_have_char(ustr_sp str, char chr);

ustrpos_s ustr_find(ustr_sp str, ustr_sp substr);
ustrpos_s ustr_find_str(ustr_sp str, const char *substr);
ustrpos_s ustr_find_char(ustr_sp str, char chr);

ustrpos_s ustr_rfind(ustr_sp str, ustr_sp substr);
ustrpos_s ustr_rfind_str(ustr_sp str, const char *substr);
ustrpos_s ustr_rfind_char(ustr_sp str, char chr);

ustr_s ustr_find_all(ustrpos_s *idxs, ustr_sp str, ustr_sp substr);//
ustr_s ustr_find_all_str(ustrpos_s *idxs, ustr_sp str, const char *substr);//
ustr_s ustr_find_all_char(ustrpos_s *idxs, ustr_sp str, char chr);//

/* check out functions */

int ustr_start_with(ustr_sp str, ustr_sp start);//
int ustr_start_with_str(ustr_sp str, const char *start);//
int ustr_start_with_char(ustr_sp str, char start);//

int ustr_end_with(ustr_sp str, ustr_sp end);//
int ustr_end_with_str(ustr_sp str, const char *end);//
int ustr_end_with_char(ustr_sp str, char end);//

int ustr_isdigit(ustr_sp str);
int ustr_isbdigit(ustr_sp str);
int ustr_isodigit(ustr_sp str);
int ustr_isxdigit(ustr_sp str);
int ustr_isalpha(ustr_sp str);
int ustr_isalnum(ustr_sp str);
int ustr_isspace(ustr_sp str);
int ustr_isblank(ustr_sp str);
int ustr_isupper(ustr_sp str);
int ustr_islower(ustr_sp str);

/* cmp functions */

int ustr_cmp(ustr_sp str1, ustr_sp str2);
int ustr_cmp_str(ustr_sp str1, const char *str2);

int ustr_ocmp(ustr_sp str1, ustr_sp str2, ustr_s offset);
int ustr_ocmp_str(ustr_sp str1, const char *str2, ustr_s offset);

int ustr_ncmp(ustr_sp str1, ustr_sp str2, ustr_s count);
int ustr_ncmp_str(ustr_sp str1, const char *str2, ustr_s count);

int ustr_oncmp(ustr_sp str1, ustr_sp str2, ustr_s offset, ustr_s count);
int ustr_oncmp_str(ustr_sp str1, const char *str2, ustr_s offset, ustr_s count);

int ustr_equal(ustr_sp str1, ustr_sp str2);
int ustr_nequal(ustr_sp str1, ustr_sp str2);

/* input functions */

ustr_s ustr_gets(ustr_p str, ustr_s size);
ustr_s ustr_fgets(ustr_p str, ustr_s size, FILE *stream);

/* output functions */

void ustr_puts(ustr_sp str, char end);
void ustr_fputs(ustr_sp str, char end, FILE *stream);

/* property functions */

ustr_s ustr_size(ustr_sp str);

ustr_s ustr_len(ustr_sp str);

#endif /* __USTR__ */
