#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * operation - a function that declares specifiers to the function
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
	else if (argument == 'd' || argument == 'i')
	{
		count += digit((long)(va_arg(args, int)), 10);
	}
	else if (argument == '%')
	{
		modu();
		count++;
	}
	return (count);
}
