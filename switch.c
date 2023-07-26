#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @result: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int result)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			result = printf_integer(args, result);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			result++;
			break;
		case 's':
			result = printf_string(args, printed);
			break;
		case '%':
			_putchar('%');
			result++;
			break;
		case 'b':
			result = printf_binary(va_arg(args, unsigned int), printed);
			break;
		case 'x':
		case 'X':
			result = _x(va_arg(args, unsigned int), printed, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			result = printf_octal(va_arg(args, unsigned int), printed);
			break;
		case 'u':
			result = printf_unsigned(va_arg(args, unsigned int), printed);
			break;
		case 'r':
			result = printf_reverse(args, printed);
			break;
		case 'p':
			result = printf_pointer(args, printed);
			break;
		default:
			break;
	}
	return (result);
}
