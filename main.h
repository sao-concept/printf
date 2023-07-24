#ifndef TEAM_H
#define TEAM_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flagContainer - struct containing flags to "activate"
 * when a flag specifier is passed to custom_printf()
 * @addition: flag for the '+' character
 * @gap: flag for the ' ' character
 * @hashKey: flag for the '#' character
 */
typedef struct flagContainer
{
	int addition;
	int gap;
	int hashKey;
} flagContainer_t;

/**
 * struct formatHandler - struct to select the appropriate function
 * based on the format specifier passed to custom_printf()
 * @specifier: format specifier
 * @handler: pointer to the right printing function
 */
typedef struct formatHandler
{
	char specifier;
	int (*handler)(va_list ap, flagContainer_t *flags);
} formatHandler_t;

/* numericPrinter */
int print_integer(va_list list, flagContainer_t *flags);
void display_number(int num);
int display_unsigned(va_list list, flagContainer_t *flags);
int digit_counter(int integer);

/* basePrinter */
int display_hex(va_list list, flagContainer_t *flags);
int display_hex_big(va_list list, flagContainer_t *flags);
int display_binary(va_list list, flagContainer_t *flags);
int display_octal(va_list list, flagContainer_t *flags);

/* converterFunc */
char *convert_num(unsigned long int num, int base, int lower);

/* _printf */
int _printf(const char *format, ...);

/* obtain_printer */
int (*obtain_printer(char s))(va_list, flagContainer_t *);

/* fetch_flag */
int fetch_flag(char s, flagContainer_t *flags);

/* alphabeticPrinter */
int print_str(va_list list, flagContainer_t *flags);
int print_character(va_list list, flagContainer_t *flags);

/* writeHelper */
int put_character(char c);
int put_string(char *str);

/* customPrints */
int display_rot13_string(va_list list, flagContainer_t *flags);
int display_reversed_string(va_list list, flagContainer_t *flags);
int display_uppercase_S(va_list list, flagContainer_t *flags);

/* print_address */
int print_memory_address(va_list list, flagContainer_t *flags);

/* print_percent */
int print_percentage(va_list list, flagContainer_t *flags);

#endif /* TEAM_H */
