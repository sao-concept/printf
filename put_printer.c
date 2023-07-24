#include "main.h"
#include <unistd.h>

/**
 * put_character - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: put_character uses a local buffer of 1024 to call write
 * as little as possible
 */
int put_character(char c)
{
	static char buffer[1024];
	static int idx;

	if (c == -1 || idx >= 1024)
	{
		write(1, &buffer, idx);
		idx = 0;
	}
	if (c != -1)
	{
		buffer[idx] = c;
		idx++;
	}
	return (1);
}

/**
 * put_string - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int put_string(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		put_character(str[i]);
	return (i);
}
