#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "self.h"

void *def_malloc(size_t size)
{
    void *block = malloc(size);

    if (!block)
        crash("def_malloc function: can not allocate memory");

    return block;
}

void *def_realloc(void *block, size_t size)
{
    block = realloc(block, size);

    if (!block)
        crash("def_realloc function: can not reallocate memory");

    return block;
}

void def_free(void *block)
{
    free(block);
}

void def_cpy(void *dst, const void *src, size_t n)
{
    memcpy(dst, src, n);

    if (!dst)
        crash("def_cpy function: con not copy the memory");
}

void crash(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    vfprintf(stderr, format, ap);
    va_end(ap);

    abort();
}
