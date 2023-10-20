#include "main.h"

/**
 * printf_binary - prints the binary representation of an unsigned int
 *
 * @args: va_list containing the unsigned int to print
 * Return: number of characters to print
 */

int printf_binary(va_list args)
{
	unsigned int f, tl, v, num, s, cal;
	int count = 0;

	s = va_arg(args, unsigned int);
	if (s != 0)
	{
		cal = s;
		f = 0;

		while (cal != 0)
		{
			cal /= 2;
			f++;
		}
		tl = 1;

		for (v = 1; v <= f - 1; v++)
			tl *= 2;

		for (v = 1; v <= f; v++)
		{
			count++;
			s -= num * tl;
			tl /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
