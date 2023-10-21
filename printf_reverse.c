#include "main.h"

/**
 * printf_reverse - This prints in reverse form
 *
 * @value: keeps track of our loop
 *
 * Return: results in a reversed form
 */

int printf_reverse(va_list value)
{
	char *g = va_arg(value, char*);
	int i;
	int j = 0;

	if (g == NULL)
		g = "(null)";
	while (g[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(j[i]);
	return (j);
}
