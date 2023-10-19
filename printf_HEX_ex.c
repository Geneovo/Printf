#include "main.h"

/**
 * printf_HEX_ex - this coverts to hexdecimal
 *
 * @num: input parameter
 *
 * Return: count
 */

int printf_HEX_ex(unsigned int num)
{
	int i, count = 0;
	int *array;
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
		ten /= 16;
	}

	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
