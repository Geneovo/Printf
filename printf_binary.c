#include "main.h"

/**
 * printf_binary - prints the binary representation of an unsigned integer
 * @args: va_list containing the unsigned integer to print
 * Return: number of characters printed
 */

int printf_binary(va_list args)
{
	int f, count, j, b;
	unsigned int n, k;

	f = 0;
	count = 0;
	n = va_arg(args, unsigned int);
	for (j = 0; j < 32; j++)
	{
		k = ((lu << (32 - j)) & n);
		if (k >> (31 - j))
		{
			f = 1;
		}
		if (f)
		{
			b = k >> (31 - j);
			_putchar('0' + b);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
