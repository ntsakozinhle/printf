#include "main.h"

/**
 * print_long_int - a function that prints larger bit ints
 * @n: parameter for int passed to function
 * Return: count
 */

int print_long_int(long int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		count += print_int(n / 10);
	}
	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * hexa_int - a function that prints an int with base 16
 * @n: parameter to be passed to function
 * @format_specifier: parameter for function secifiers
 * Return: count
 */

int hexa_int(long int n, char format_specifier)
{
	int count = 0;
	int remainder = n % 16;
	char hexa_char;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n / 16)
	{
		count += hexa_int(n / 16, format_specifier);
	}
	if (remainder < 10)
	{
		count += _putchar(remainder + '0');
	}
	else
	{
		hexa_char = (format_specifier == 'x') ? 'a' : 'A';
		count += _putchar(remainder - 10 + hexa_char);
	}

	return (count);
}

/**
 * octal_int - a funtion that prints an in with base 8
 * @n: parameter to be passed to function
 * Return: count
 */

int octal_int(long int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		count += _putchar('0');
	}

	else
	{
		if (n / 8)
		{
			count += octal_int(n / 8);
		}
		count += _putchar((n % 8) + '0');
	}
	return (count);
}

/**
 * binary_num - a function that prints a binary number
 * @num: parameter for function to be passed
 * Return: void
 */

void binary_num(unsigned int num)
{
	int binNum[32];
	int b = 0;
	int j;

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

	for (j = b - 1; j >= 0; j--)
	{
		_putchar(binNum[j] + '0');
	}
}
