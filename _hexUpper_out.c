#include "main.h"

/**
* display_hex_big - prints a number in hexadecimal base,
* in uppercase
* @list: va_list arguments from _printf
* @flags: pointer to the struct flagContainer that determines
* if a flag is passed to _printf
* Description: the function calls convert() which in turns converts the input
* number into the correct base and returns it as a string
* Return: the number of char printed
*/
int display_hex_big(va_list list, flagContainer_t *flags)
{
unsigned int num = va_arg(list, unsigned int);
char *str = convert_num(num, 16, 0);
int count = 0;

if (flags->hashKey == 1 && str[0] != '0')
count += put_string("0X");
count += put_string(str);
return (count);
}
