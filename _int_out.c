#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _int_out - Convert an integer to decimal and print it to standard output.
* @argList: Variadic argument list.
*
* Return: Number of characters written (success).
*/
int _int_out(va_list argList)
{
int idx = 0;
int count = 0;
int num;
int numArr[10];
char charElem[1];

/* Collect integer value from variadic argument list */
num = va_arg(argList, int);

if (num == 0) /* Special case for handling zero */
{
charElem[0] = '0';
count = write(1, charElem, 1);
return (count);
}

/* Split collected numbers, then assign to numArr */
while (num != 0)
{
numArr[idx] = (num % 10);
num /= 10;
if (num == 0)
break;
else
idx++;
}

/* Convert each digit back to character and print */
for (; idx >= 0; idx--)
{
charElem[0] = ('0' + numArr[idx]);
count = count + write(1, charElem, 1);
}

return (count);
}

