#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alpha - a function that prints a character
 * @c: parameter for char
 * Return: char
 */

int alpha(int c)
{
	return (putchar(c));
}

/**
 * string - a function that prints a string
 * @str: parameter for string
 * Return: string
 */

int string(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		alpha((int) *str);
		str++;
		count++;
	}
	return (count);
}

/**
 * modu - a function that does not take input, prints %
 * Return: void
 */

void modu(void)
{
	putchar('%');
}

/**
 * operation - a function that declares specifiers to be checked
 * @argument: specifier for operation
 * @args: arguments to be passed to function
 * Return: count
 */

int operation(char argument, va_list args)
{
	int count = 0;

	if (argument == 'c')
	{
		count += alpha(va_arg(args, int));
	}
	else if (argument == 's')
	{
		count += string(va_arg(args, char *));
	}
	else if (argument == '%')
	{
		modu();
		count++;
	}
	return (count);
}

/**
 * _printf - a function that prints arguments to output
 * @format: arguments to be passed to function
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
