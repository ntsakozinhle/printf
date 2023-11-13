#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* print_int - function to print integers
* @n: number to be printed
* Return: count of characters printed
*/

int print_int(int n)
{
int count = 0;

if (n < 0)
{
count += putchar('-');
n = -n;
}
if (n / 10)
{
print_int(n / 10);
}
count += putchar((n % 10) + '0');
return (count);
}

/**
* format_specifier_conditions - function selects the variable argument
* to print based on the character after the %
* @format_specifier: character after the %
* @ptr: pointer to arguments
* Return: count of characters printed
*/

int format_specifier_conditions(char format_specifier, va_list ptr)
{
int count = 0;

switch (format_specifier)
{
case 'd': case 'i':
count += print_int((va_arg(ptr, int)));
break;
default:
count += putchar(format_specifier);
break;
}
return (count);
}

/**
* _printf - custom function that writes output to standard function
* @format: format string
* Return: count of all characters printed
*/

int _printf(const char *format, ...)
{
int i;
int count = 0;
va_list ptr;
va_start(ptr, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
count += putchar(format[i]);
else
{
i++;
count += format_specifier_conditions(format[i], ptr);
}
}
va_end(ptr);
return (count);
}
