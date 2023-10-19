#include "main.h"

/**
 * printf_char - prints a character
 * @args: va_list containing the character to print
 * Return: 1
 */

int printf_char(va_list args)
{
	unsigned char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
