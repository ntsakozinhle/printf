#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - a function that prints operation to output
 * @format: parameter for specifier to be passed
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += operation(*(format + 1), args);
			format += 2;
		}

		else
		{
			count += putchar(*format);
			format++;
		}
	}
	va_end(args);

	return (count);
}
