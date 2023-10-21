#include "main.h"

/**
 * printf_hex_ext - Function that handles the extended hexadecimal
 * format specifier
 *
 * @lens: arguments
 *
 * Return: count
 */

int printf_hex_ext(unsigned long int lens)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int ten = lens;

	while (lens / 16 != 0)
	{
		lens /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);

	if (array == NULL)
		return (-1);
	for (i = 0, i < count; i++)
	{
		array[i] =  ten % 16;
		ten /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
