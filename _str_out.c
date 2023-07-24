#include "main.h"

/**
 * print_str - loops through a string and prints
 * every character
 * @list: va_list arguments from _printf
 * @flags: pointer to the struct flagContainer that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_str(va_list list, flagContainer_t *flags)
{
	char *s = va_arg(list, char *);

	(void)flags;

	if (!s)
		s = "(null)";
	return (put_string(s));
}
