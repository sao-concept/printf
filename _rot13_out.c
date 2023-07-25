#include "main.h"

/**
 * display_rot13_string - prints a string using rot13
 * @list: list of arguments from _printf
 * @flags: pointer to the struct flagContainer that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int display_rot13_string(va_list list, flagContainer_t *flags)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(list, char *);

	(void)flags;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			put_character(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					put_character(ROT13[i]);
			}
		}
	}

	return (j);
}
