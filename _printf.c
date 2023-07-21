#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * write_char - Writes a single character to the standard output.
 * @c: The character to be written.
 * Return: The number of characters written (1).
 */
static int write_char(char c)
{
	return (write(1, &c, 1));
}
/**
 * write_str - Writes a string to the standard output.
 * @str: The string to be written.
 * Return: The number of characters written.
 */
static int write_str(const char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (write(1, str, len));
}
/**
 * _printf - This function prints a formatted
 * string with conversion specifiers.
 * @format: The format string containing the conversion specifiers.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int idx = 0, total_chars = 0;
	va_list argList;
	int (*funcPtr)(va_list);

	if (format == NULL)
		return (-1);

	va_start(argList, format);

	while (format[idx])
	{
		if (format[idx] != '%')
		{
			total_chars += write_char(format[idx]);
			idx++;
			continue;
		}

		funcPtr = _spec_checker(&format[idx + 1]);
		if (funcPtr != NULL)
		{
			total_chars += funcPtr(argList);
			idx += 2;
			continue;
		}

		if (format[idx + 1] == '\0')
		{
			total_chars += write_char(format[idx]);
			break;
		}
		else
		{
			total_chars += write_str(&format[idx]);
			idx += 2;
		}
	}
	va_end(argList);
	return (total_chars);
}
