#include "main.h"

/**
* display_reversed_string - prints a string in reverse
* @list: argument from _printf
* @flags: pointer to the struct flagContainer that determines
* if a flag is passed to _printf
* Return: length of the printed string
*/
int display_reversed_string(va_list list, flagContainer_t *flags)
{
int i = 0, j;
char *s = va_arg(list, char *);

(void)flags;
if (!s)
s = "(null)";

while (s[i])
i++;

for (j = i - 1; j >= 0; j--)
put_character(s[j]);

return (i);
}
