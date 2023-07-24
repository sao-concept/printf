#printf Project

The printf function print formatted output into the standard output such as Monitor.

A custom _printf() which is expected to perform similar function, even though, doesn’t cover all the robust functionality of the real printf, but some common and familiar functionality for the purpose of learning developed by:

Set: Cohort-16
Team: Azeez Saka and Favour Abalogu

------------------------------------------------------------------------------------------------------------------------------------
#Resources Used
Secrets of printf by Don Colton

-------------------------------------------------------------------------------------------------------------------------------------
#List of some Functions and Macros used for the Project
Va_list (man arg)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_arg (man 3 va_arg)
write (man 2 write)

--------------------------------------------------------------------------------------------------------------------------------------
# Compilation:
To use this custom printf, the following compilation command has to apply:
$ gcc -Wall -Werror -Wextra -pedantic *.c

---------------------------------------------------------------------------------------------------------------------------------------
# Use Cases:
Prototype Declaration: int _printf(const char *format, ...);
Application: _printf("format string", argument1, argument2, ...);

---------------------------------------------------------------------------------------------------------------------------------------
Example use case:
- To print a string: _printf("%s ALX SE School", "Hello");`
- Output: Hello ALX SE School
- To Print integers: _printf("Sum of %d and  %d = %d", a, b,  a + b);`
- Output: Sum of 5 and 8 = 13
/* Assuming 5 and 8 were the numbers initially assigned to ‘a’ and ‘b’ respectively */

Some other format specifiers were also captured.

