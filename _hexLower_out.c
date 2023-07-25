#include "main.h"

/**
* display_hex - prints a number in hexadecimal base,
* in lowercase
* @list: va_list arguments from _printf
* @flags: pointer to the struct flagContainer that determines
* if a flag is passed to _printf
* Description: the function calls convert() which in turns converts the input
* number into the correct base and returns it as a string
* Return: the number of char printed
*/
int display_hex(va_list list, flagContainer_t *flags)
{
unsigned int num = va_arg(list, unsigned int);
char *str = convert_num(num, 16, 1);
int count = 0;

if (flags->hashKey == 1 && str[0] != '0')
count += put_string("0x");
count += put_string(str);
return (count);
}
