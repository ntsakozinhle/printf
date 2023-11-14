#include "main.h"

/**
* format_specifier_conditions - function that chooses the
* argument to print based on the format specifier
* @format_specifier: the character after the '%' special character
* @ptr: pointer to the arguments
* Return: the number of characters printed
*/

int format_specifier_conditions(char format_specifier, va_list ptr)
{
int count = 0;

switch (format_specifier)
{
case 'c':
count += print_c(va_arg(ptr, int));
break;
case 's':
count += print_string(va_arg(ptr, char*));
break;
case '%':
count += _putchar('%');
break;
case 'd': case 'i':
count += print_int((va_arg(ptr, int)));
break;
case 'x':
count += hexa_int(va_arg(ptr, unsigned int), 0);
break;
case 'X':
count += hexa_int(va_arg(ptr, unsigned int), 1);
break;
case 'u':
count += print_long_int(va_arg(ptr, unsigned int));
break;
case 'o':
count += octal_int(va_arg(ptr, unsigned int));
break;
case 'b':
count += binary_num(va_arg(ptr, unsigned int));
break;
default:
count += _putchar('%');
count += _putchar(format_specifier);
break;
}
return (count);
}
