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
	unsigned int rn;
	int digit, expo = 1;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	rn = num;

	while (rn != 0)
	{
		rn /= 10;
		expo *= 10;
	}

		while (expo > 0)
		{
			digit = rn / expo;
			_putchar(digit + '0');
			num = num - (digit * expo);
			expo /= 10;
			i++;
		}
	return (i);
}
