#include "main.h"

/**
 * printf_strlen - This prints a string with special handling
 * for non-printable chars
 *
 * @args: va_list containing the string to print
 *
 * Return: number of char to print
 */

int printf_strlen(va_list args)
{
	char *s;
	int i, len = 0;
	int val;

	s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			val = s[i];

			if (val < 16)
			{
				_putchar('0');
				len++;
			}
			len += printf_HEX_ex(val);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
