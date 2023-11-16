#include "main.h"


/**
* print_base_number - prints an unsigned int based of its base
* @n: unsigned int
* @base: specified base
* @upper_case: hexadecimal conversion to print in uppercase or lower case
* Return: number of characters printed
*/

int print_base_number(unsigned int n, int base, int upper_case)
{
int count = 0;
char last_digit;

if (n / base)
{
count += print_base_number(n / base, base, upper_case);
}
/* to get last digit in the base representation of n*/
last_digit = n % base;
/*to print a base larger than 10*/
if (last_digit > 10)
{
count += _putchar((upper_case ? 'A' : 'a') + last_digit - 10);
}
/*to print regular digits (0 to 9)*/
else
{
count += _putchar('0' + last_digit);
}
return (count);
}

/**
* hexa_int - a function that prints an int with base 16
* @n: parameter to be passed to function
* @upper_case: 1 if character is uppercase
* Return: count
*/

int hexa_int(unsigned int n, int upper_case)
{
return (print_base_number(n, 16, upper_case));
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
