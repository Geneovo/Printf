#include "main.h"

/**
 * printf_string - prints a string character
 *
 * @args: argument
 *
 * Return: 0
 */

int printf_string(va_list args)
{
	char *ab;
	int c = 0;

	ab = va_arg(args, char *);

	if (ab == NULL)
		ab = "(null)";
	while (ab[c])
	{
		_putchar(ab[c]);
		c++;
	}

	return (c);
}
