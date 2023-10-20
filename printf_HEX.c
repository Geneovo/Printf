#include "main.h"

/**
 * printf_HEX - This converts to hexadecimal uppercase
 *
 * @args: argument to print
 *
 * Return: count
 */

int printf_HEX(va_list args)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int ten = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	if (array == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		array[i] = ten % 16;
		ten = ten / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
