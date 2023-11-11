#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 * Return: 1 on succes
 * On error , - 1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
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
	char *str;

	switch (format_specifier)
	{
		case 'c':
		count += _putchar(va_arg(ptr, int));
		break;
		case 's':
		str = va_arg(ptr, char*);
		if (str == NULL)
			return (0);
		while (*str != '\0')
		{
			_putchar((int)*str);
			count++;
			str++;
		}
		break;
		case '%':
		count += _putchar(format_specifier);
		break;
		default:
		count += _putchar(format_specifier);
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
