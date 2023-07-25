#include "main.h"

/**
 * print_memory_address - prints address of input in hexadecimal format
 * @list: va_list arguments from _printf
 * @flags: pointer to the struct flagContainer that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_memory_address(va_list list, flagContainer_t *flags)
{
	char *convertedStr;
	unsigned long int addr = va_arg(list, unsigned long int);

	register int count = 0;

	(void)flags;

	if (!addr)
		return (put_string("(nil)"));
	convertedStr = convert_num(addr, 16, 1);
	count += put_string("0x");
	count += put_string(convertedStr);
	return (count);
}
