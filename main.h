#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/** format - format sturct
 * @lett: format iddentifier
 * @func: functions pointer
 */

typedef struct format
{
	char *lett;
	int (*func)(va_list);
}check;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char);
int print_number(va_list arg_list);
int printf_char(va_list arg_list);
int printf_string(va_list arg_list);
int print_percent(__attribute__((unused))va_list arg_list);
#endif
