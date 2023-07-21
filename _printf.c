#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _printf -This function prints a string formatted
* according to the format string.
* @format: The format string containing the
* conversion specifiers.
*
* Return: The number of characters printed.
*/
int _printf(const char *format, ...)
{
/* variable to loop through the number of characters */
int idx = 0;
/* variable to hold the number of characters */
int val_ret = 0;
/* counter variable to store the total number */
int total_chars = 0;
/* va_list to iterate through the unnamed arguments */
va_list argList;

/* Initialize the va_list and start iterating arguments */
va_start(argList, format);

/* Function pointer */
int (*funcPtr)(va_list);

if (format == NULL)
return (-1);

while (format[idx])
{
/* Check if the character is not '%' */
if (format[idx] != '%')
{
val_ret = write(1, &format[idx], 1);
total_chars += val_ret;
idx++;
continue;
}

/* Check for valid format specifier */
funcPtr = _spec_checker(&format[idx + 1]);
if (funcPtr != NULL)
{
val_ret = funcPtr(argList);
total_chars += val_ret;
idx += 2;
continue;
}

/* Handle invalid format specifier */
if (format[idx + 1] == '\0')
{
/* Write just the '%' character */
val_ret = write(1, &format[idx], 1);
total_chars += val_ret;
break;
}
else
{
/* Write both '%' and the next character */
val_ret = write(1, &format[idx], 2);
total_chars += val_ret;
idx += 2;
}
}

/* Free the va_list and return total characters written */
va_end(argList);
return (total_chars);
}

