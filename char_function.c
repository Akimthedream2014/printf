#include "main.h"

/**
 * printf_char - prints a char.
 * @arg_list: arguments.
 * Return: 1.
 */
int printf_char(va_list arg_list)
{
	char s;

	s = va_arg(arg_list, int);
	_putchar(s);
	return (1);
}
