#include <unistd.h>
#include "main.h"

/**
* _char_out - Prints a character to standard output.
* @argsList: Variadic parameter containing the character to print.
*
* Return: Always 1 (success).
*/
int _char_out(va_list argsList)
{
char char_val = va_arg(argsList, int);

/* Write the character to standard output */
write(1, &char_val, 1);

return (1);
}
