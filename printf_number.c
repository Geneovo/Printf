#include "main.h"
/**
 * printf_number - This prints a number
 * @args: argument to print
 * Return: number of chars to print
 */
int printf_number(va_list args)
{
int num = va_arg(args, int);
int figure, last_digit = num % 10, digit, power = 1;
int printed_chars = 1;
	num = num / 10;
	figure = num;
	if (last_digit < 0)
	{
		_putchar('-');
		figure = -figure;
		num = -num;
		last_digit = -last_digit;
		printed_chars++;
	}
	if (figure > 0)
	{
		while (figure / 10 != 0)
		{
			power = power * 10;
			figure = figure / 10;
		}
		figure = num;
		while (power > 0)
		{
			digit = figure / power;
			_putchar(digit + '0');
			figure = figure - (digit * power);
			power = power / 10;
			printed_chars++;
		}
	}
	_putchar(last_digit + '0');
	return (printed_chars);
}
