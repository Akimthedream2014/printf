#include "main.h"

/**
 * _printf - function to print formatted output
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, sum_char = 0, found;
	va_list list_arg;

	check fmat[] = {
		{"c", printf_char}, {"s", printf_string}, {"%", print_percent},
		{"d", print_number}, {"i", print_number}
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list_arg, format);
	while (*format)
	{
		if (*format != '%' && *format != '\0')
		{
			_putchar(*format);
			sum_char++;
		} else
		{
			format++;
			if (*format == '\0')
				break;
			for (found = 0, i = 0; i < sizeof(fmat) / sizeof(fmat[0]); i++)
			{
				if (*format == *(fmat[i].lett))
					sum_char += fmat[i].func(list_arg);
				found = 1;
				break;
			}
		}
		if (!found)
		{
			_putchar(*(--format));
			sum_char++;
		}
	}
	format++;
	va_end(list_arg);
	return (sum_char);
}
