#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct format_specs - a struct to hold the format specifiers
 * and it's correspionding function
 * @specs: char pointer to the strings of specifiers
 * @ptf: pointer to the array of functions
 */

typedef struct format_specs
{
		char *specs;
		int (*ptf)(va_list);
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int p_c(va_list params);
int p_str(va_list params);
int p_per(va_list params);
int p_i(va_list params);
int p_d(va_list params);
int print_number(int n);
int p_bi(va_list params);
int p_unsigned(va_list params);
int p_oct(va_list params);
int p_hex(va_list params);
int p_HEX(va_list params);
int p_ptr(va_list params);
int p_rev(va_list params);
int p_rot13(va_list params);
int p_S(va_list params);

#endif
