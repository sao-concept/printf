#include "main.h"

/**
* display_unsigned - prints an unsigned integer
* @list: va_list of arguments from _printf
* @flags: pointer to the struct flagContainer determining
* if a flag is passed to _printf
* Return: number of char printed
*/
int display_unsigned(va_list list, flagContainer_t *flags)
{
unsigned int u = va_arg(list, unsigned int);
char *str = convert_num(u, 10, 0);

(void)flags;
return (put_string(str));
}
