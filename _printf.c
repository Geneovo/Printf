#include "main.h"

/**
 * characters - finds and returns the handler function for
 * a given format specifier
 * @format: format specifier
 * Return: pointer to the handler function
 */
int (*characters(const char *format))(va_list)
{
	unsigned int x = 0;
	p_code find_t[] = {
		{ "c", printf_char },
		{ "S", printf_string },
		{ "i", printf_number },
		{ "d", printf_number },
		{ "b", printf_binary },
		{ NULL, NULL }
	};

	while (find_t[x].identifier)
	{
		if (find_t[x].identifier[0] == (*format))
			return (find_t[x].p);
		x++;
	}
	return (NULL);
}

/**
 * _printf - produces output according to the format
 * @format: format string
 * Return: number of chars printed (excluding the null bytes used)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*p)(va_list);
	size_t v = 0, front = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[v])
	{
		while (format[v] != '%' && format[v])
		{
			_putchar(format[v]);
			front++;
			v++;
		}
		if (format[v] == '\0')
		{
			return (front);
		}
	p = characters(&format[v + 1]);
	if (p != NULL)
	{
		front += p(args);
		v += 2;
		continue;
	}
	if (!format[v + 1])
		return (-1);
	_putchar(format[v]);
	front++;
	if (format[v + 1] == '%')
		v += 2;
	else
		v++;
	}
	va_end(args);
	return (front);
}
