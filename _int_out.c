#include "main.h"

/**
 * print_integer - prints an integer
 * @list: va_list of arguments from _printf
 * @flags: pointer to the struct flagContainer determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_integer(va_list list, flagContainer_t *flags)
{
	int n = va_arg(list, int);
	int res = count_digit(n);

	if (flags->gap == 1 && flags->addition == 0 && n >= 0)
		res += put_character(' ');
	if (flags->addition == 1 && n >= 0)
		res += put_character('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}
