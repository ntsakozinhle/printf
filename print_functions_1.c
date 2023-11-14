#include "main.h"

/**
 * print_long_int - a function that prints larger bit ints
 * @n: parameter for int passed to function
 * Return: count
 */

int print_long_int(unsigned int n)
{
	int count = 0;

	if (n / 10)
	{
		count += print_long_int(n / 10);
	}
	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_base_number - prints an unsigned int based of its base
 * @n: unsigned int
 * @base: specified base
 * @capital: hexadecimal conversion to print in uppercase or lower case
 * Return: number of characters printed
 */

int print_base_number(unsigned int n, int base, int capital)
{
	int count = 0;
	char digit;

	if (n / base)
	{
		count += print_base_number(n / base, base, capital);
	}
	digit = n % base;
	if (digit > 9)
	{
		count += _putchar((capital ? 'A' : 'a') + digit - 10);
	}
	else
	{
		count += _putchar('0' + digit);
	}
	return (count);
}


/**
 * hexa_int - a function that prints an int with base 16
 * @n: parameter to be passed to function
 * @capital: if character is uppercase or lowercase
 * Return: count
 */

int hexa_int(unsigned int n, int capital)
{
	return (print_base_number(n, 16, capital));
}

/**
 * octal_int - a funtion that prints an in with base 8
 * @n: parameter to be passed to function
 * Return: count
 */

int octal_int(unsigned int n)
{
	return (print_base_number(n, 8, 0));
}

/**
 * binary_num - a function that prints a binary number
 * @num: parameter for function to be passed
 * Return: void
 */

int binary_num(unsigned int num)
{
	return (print_base_number(num, 2, 0));
}
