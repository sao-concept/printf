#include "main.h"

/**
* _symbol_out - Print '%' to standard output.
* @argList: Variadic argument list (unused).
*
* Return: Number of characters written (success).
*/
int _symbol_out(va_list argList)
{
/* Cast argList to void to avoid unused parameter warning */
(void) argList;

/* Write the percent symbol '%' to standard output */
write(1, "%", 1);

/* Return the number of characters written, which is 1 in this case */
return (1);
}

