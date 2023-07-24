#include "main.h"

/**
* _spec_checker -Checks for valid format specifier
* and return corresponding function.
* @specifier: The format specifier to check.
*
* Return: Pointer to the corresponding function, or NULL if not found.
*/
int (*_spec_checker(const char *specifier))(va_list)
{
int idx = 0;

/* Define the func_specifier structure inside main.h file*/
func_specifier funcArr[] = {
{"%", _symbol_out},
{"c", _char_out},
{"d", _dec_out},  /* Use _int_out for %d */
{"i", _int_out},  /* Use _int_out for %i */
{"s", _str_out},
{NULL, NULL}
};

/* Validate specifier to avoid dereferencing NULL pointers */
if (specifier == NULL)
return (NULL);

/* Loop to check for each function */
while (funcArr[idx].ch != NULL)
{
if (*(funcArr[idx].ch) == *specifier)
{
return (funcArr[idx].funcList);
}
idx++;
}

return (NULL);
}

