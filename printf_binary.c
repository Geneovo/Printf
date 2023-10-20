#include "main.h"

/**
 * printf_binary - unsigned int argument converted to binary
 *
 * @args: arguments
 *
 * Return: number of chars to print
 */

int printf_binary(va_list args)
{
	unsigned int m, tl, v, num, s, cal;
	int count = 0;

	s = va_arg(args, unsigned int);
	if (s != 0)
	{
		cal = s;
		m = 0;

		while (cal != 0)
		{
			cal /= 2;
			m++;
		}
		tl = 1;

		for (v = 1; v <= m - 1; v++)
			tl *= 2;

		for (v = 1; v <= m; v++)
		{
			num = s / tl;
			_putchar(num + '0');
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
