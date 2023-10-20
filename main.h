#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_number(va_list args);
int printf_binary(va_list args);
int printf_char(va_list args);
int printf_string(va_list args);
int printf_strlen(va_list args);
int printf_HEX_ex(unsigned int num);

/**
 * struct p_code - structure to associate format specifiers
 * @identifier: format specifier
 * @p: pointer to handling function
 */

typedef struct p_code
{
	const char *identifier;
	int (*p)(va_list);
} p_code;

#endif
