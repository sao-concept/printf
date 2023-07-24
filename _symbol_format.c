#include "main.h"

/**
 * print_percentage - prints a percent
 * @list: va_list arguments from _printf
 * @flags: pointer to the struct flagContainer in which we turn the flags on
 * Return: number of char printed
 */
int print_percentage(va_list list, flagContainer_t *flags)
{
	(void)list;
	(void)flags;
	return (put_character('%'));
}
