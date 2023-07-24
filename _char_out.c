#include "main.h"

/**
 * print_character - prints a character
 * @list: va_list arguments from _printf
 * @flags: pointer to the struct flagContainer that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_character(va_list list, flagContainer_t *flags)
{
	(void)flags;
	put_character(va_arg(list, int));
	return (1);
}
