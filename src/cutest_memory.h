/*
 *                                Copyright (C) 2015 by Rafael Santiago
 *
 * This is a free software. You can redistribute it and/or modify under
 * the terms of the GNU General Public License version 2.
 *
 */
#ifndef CUTEST_MEMORY_H
#define CUTEST_MEMORY_H 1

#if !(defined(_KERNEL) && defined(_LKM) && defined(__NetBSD__))

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void *(*tru_calloc)(size_t, size_t);

extern void *(*tru_malloc)(size_t);

extern void *(*tru_free)(void *);

extern void *(*tru_realloc)(void *, size_t);

#if !defined(_WIN32) && !defined(__FreeBSD__)

void *calloc(size_t nmemb, size_t size);

void *malloc(size_t size);

void free(void *ptr);

void *realloc(void *ptr, size_t size);

#endif

void init_memory_func_ptr();

#ifdef __cplusplus
}
#endif

#endif

#endif
