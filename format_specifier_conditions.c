#include "main.h"

/**
* format_specifier_conditions - function that decides which
* case to print based on the format specifier
* @format_specifier: character after the '%' special character
* @ptr: pointer to arguments
* Return: number of characters printed
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
default:
count += _putchar(format_specifier);
break;
}
return (count);
}

