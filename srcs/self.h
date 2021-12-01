#ifndef __SELF__
#define __SELF__

#include <stddef.h>

#define STR(s) ((s)->_str)
#define LEN(s) ((s)->_len)
#define SIZ(s) ((s)->_size)

void *def_malloc(size_t size);
void *def_realloc(void *block, size_t size);
void def_free(void *block);

void def_cpy(void *dst, const void *src, size_t n);

void crash(const char *format, ...);

#endif /* __SELF__ */
