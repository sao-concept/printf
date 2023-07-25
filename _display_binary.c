#include "main.h"

/**
* display_binary - prints a number in base 2
* @list: va_list arguments from _printf
* @flags: pointer to the struct flagContainer that determines
* if a flag is passed to _printf
* Description: the function calls convert() which in turns converts the input
* number into the correct base and returns it as a string
* Return: the number of char printed
*/
int display_binary(va_list list, flagContainer_t *flags)
{
unsigned int num = va_arg(list, unsigned int);
char *str = convert_num(num, 2, 0);

(void)flags;
return (put_string(str));
}
