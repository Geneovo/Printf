#include "main.h"

/**
 * printf_pointer - this prints the character p
 *
 * @value: argument
 *
 * Return: count
 */

int printf_pointer(va_list value)
{
	void *p;
	char *c = "(nil)";
	long int index;
	int i, j;

	p = va_arg(value, void*);
	if (p == NULL)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
		return (i);
	}

	index = (unsigned lomg int)p;
	_putchar('0');
	_putchar('x');

	j = printf_hex_ext(index);
	return (j + 2);
}
