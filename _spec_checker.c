#include "main.h"

/**
 * obtain_printer - selects the right printing function
 * based on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * handler_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then selects the appropriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*obtain_printer(char s))(va_list, flagContainer_t *)
{
	formatHandler_t handler_arr[] = {
		{'i', print_integer},
		{'s', print_str},
		{'c', print_character},
		{'d', print_integer},
		{'u', display_unsigned},
		{'x', display_hex},
		{'X', display_hex_big},
		{'b', display_binary},
		{'o', display_octal},
		{'R', display_rot13_string},
		{'r', display_reversed_string},
		{'S', display_uppercase_S},
		{'p', print_memory_address},
		{'%', print_percentage},
		{'\0', NULL}
		};
	int totalFlags = sizeof(handler_arr) / sizeof(formatHandler_t) - 1;

	register int index;

	for (index = 0; index < totalFlags; index++)
		if (handler_arr[index].specifier == s)
			return (handler_arr[index].handler);
	return (NULL);
}
