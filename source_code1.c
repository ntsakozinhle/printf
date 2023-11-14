#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * hexa - a function that converts an int to a hexadecimal
 * @n: parameter for int to be passed to a function
 * @base: base of number at n
 * Return: count
 */

int hexa(long int n, int base)
{
	int count;
	char *num;

	num = "0123456789ABCDEF";

	if (n < 0)
	{
		_putchar('-');
		return (hexa(-n, base) + 1);
	}

	if (n < base)
	{
		return (alpha(num[n]));
	}

	else
	{
		count = hexa(n / base, base);
		return (count + alpha(num[n % base]));
	}
}

/**
 * binary - a function that converts an int to binary
 * @num: parameter for int to be converted
 * Return: void
 */

void binary(int num)
{
	int binNum[32];
	int b = 0;
	int d;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	for ( ; num > 0; )
	{
		binNum[b++] = num % 2;
		num /= 2;
	}

	for (d = b - 1; d >= 0; d--)
	{
		_putchar(binNum[d] + '0');
	}
}
