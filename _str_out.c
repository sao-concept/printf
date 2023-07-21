#include "main.h"

/**
* _str_out - Prints a string of characters to the standard output.
* @argList: Variadic argument list.
*
* Return: Number of characters written (success).
*/
int _str_out(va_list argList)
{
int idx = 0; /* Initialize 'idx' to 0 */
int count = 0;
char *strVal;

strVal = va_arg(argList, char *);
if (strVal == NULL)
{
return (-1); /* Return -1 to indicate an error (NULL string) */
}

while (strVal[idx])
{
count += write(1, &strVal[idx], 1);
/* Increment 'count' for each character written */
idx += 1;
}
/* Return the total number of characters written */
return (count);
}

