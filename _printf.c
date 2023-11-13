#include "main.h"

/**
* _printf - custom printf function
* @format: format string
* Return: number of characters printed
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
