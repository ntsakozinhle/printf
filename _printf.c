#include "main.h"

/**
* _printf - custom print function
* @format: format string
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
int i;
int count = 0;
va_list ptr;


va_start(ptr, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
count += _putchar(format[i]);
else
{
i++;
count += format_specifier_conditions(format[i], ptr);
}
}
va_end(ptr);
return (count);
}
