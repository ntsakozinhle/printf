#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alpha - a function that prints a char
 * @c: parameter for char
 * Return:  char
 */

int alpha(int c)
{
	return (putchar(c));
}

/**
 * digit - a function that prints an int
 * @n: int passed through function
 * @base: base number of int
 * Return: count
 */

int digit(long int n, int base)
{
	int count;
	char *num;

	num = "0123456789abcdef";

	if (n < 0)
	{
		putchar('-');
		return (digit(-n, base) + 1);
	}

	if (n < base)
	{
		return (alpha(num[n]));
	}

	else
	{
		count = digit(n / base, base);
		return (count + alpha(num[n % base]));
	}
}

/**
 * string - a function that prints a string
 * @str: parameter for a string
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


