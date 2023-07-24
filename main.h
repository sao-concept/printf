/* Header File */

#ifndef GROUP_MAIN_H
#define GROUP_MAIN_H

/* List of included libraries */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct printSpec - Defines a struct that acts as a printer specifier
* @specifier: struct member for character
* @function: struct member that points to corresponding output function
*/
typedef struct printSpec
{
const char *ch;
int (*funcList)(va_list);
} func_specifier;

/* List of function prototypes */

/* Function that produces output according to a format */
int _printf(const char *format, ...);

/* Function that checks the format specifier */
int (*_spec_checker(const char*))(va_list);

/* Function to handle character output */
int _char_out(va_list);

/* Function to handle symbol(%) output */
int _symbol_out(va_list);

/* Function to handle string output */
int _str_out(va_list);

/* Function to output integers */
int _dec_out(va_list);

/* Function to output integers */
int _int_out(va_list);


#endif /* GROUP_MAIN_H */

