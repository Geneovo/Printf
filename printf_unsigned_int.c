#include "main.h"

/**
 * printf_unsigned_int - This prints an unsigned nteger
 *
 * @args: argument to print
 *
 * Return: number of chars to print
 */

int printf_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int rn, l = num % 10, digit, expo = 1;
	int i = 1;

	num = num / 10;
	rn = num;

	if (l < 0)
	{
		_putchar('-');
		rn = -rn;
		num = -num;
		l = -l;
		i++;
	}

	if (rn > 0)
	{
		while (rn / 10 != 0)
	{
		rn = rn / 10;
		expo = expo * 10;
	}
		rn = num;
		while (expo > 0)
		{
			digit = rn / expo;
			_putchar(digit + '0');
			num = num - (digit * expo);
			expo /= 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}
