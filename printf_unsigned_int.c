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
	int rn, l, digit, expo = 1;
	int i = 0;

	rn = num;

	if (rn == 0)
	{
		_putchar('0');
		return (1);
	}

	if (rn < 0)
	{
		_putchar('-');
		rn = -rn;
		num = -num;
		l = rn % 10;
		i++;
	}
	else
	{
		l = -rn % 10;
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
