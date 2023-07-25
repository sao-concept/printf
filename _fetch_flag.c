#include "main.h"

/**
 * fetch_flag - activates flags if _printf identifies
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @flags: pointer to the struct flagContainer in which we activate the flags
 *
 * Return: 1 if a flag has been activated, 0 otherwise
 */
int fetch_flag(char s, flagContainer_t *flags)
{
	int flagSwitched = 0;

	switch (s)
	{
		case '+':
			flags->addition = 1;
			flagSwitched = 1;
			break;
		case ' ':
			flags->gap = 1;
			flagSwitched = 1;
			break;
		case '#':
			flags->hashKey = 1;
			flagSwitched = 1;
			break;
	}

	return (flagSwitched);
}
