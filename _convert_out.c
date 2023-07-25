#include "main.h"

/**
* convert_num - converts number and base into string
* @num: input number
* @base: input base
* @lowercase: flag if hexa values need to be lowercase
* Return: result string
*/
char *convert_num(unsigned long int num, int base, int lowercase)
{
static char *represent;
static char buffer[50];
char *ptr;

represent = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
ptr = &buffer[49];
*ptr = '\0';
do {
*--ptr = represent[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
