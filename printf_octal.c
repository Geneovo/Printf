#include "main.h"

/**
 * printf_octal - This converts to octal
 *
 * @args: argument
 *
 * Return: count
 */

int printf_octal(va_list args)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int ten = num;

	while (num != 0)
	{
		num = num / 8;
		count++;
	}
	num = ten;

	array = malloc(sizeof(int) * count);
		if (array == NULL)
			return (-1);

	for (i = 0; i < count; i++)
	{
		array[i] = ten % 8;
		ten = ten / 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}

	free(array);
	return (count);
}
