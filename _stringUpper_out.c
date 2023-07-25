#include "main.h"

/**
 * display_uppercase_S - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @list: va_list arguments from _printf
 * @flags: pointer to the struct flagContainer that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int display_uppercase_S(va_list list, flagContainer_t *flags)
{
	int i, count = 0;
	char *convertedResult;
	char *s = va_arg(list, char *);

	(void)flags;
	if (!s)
		return (put_string("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			put_string("\\x");
			count += 2;
			convertedResult = convert_num(s[i], 16, 0);
			if (!convertedResult[1])
				count += put_character('0');
			count += put_string(convertedResult);
		}
		else
			count += put_character(s[i]);
	}
	return (count);
}
