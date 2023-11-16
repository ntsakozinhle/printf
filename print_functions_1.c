#include "main.h"

/**
* print_u_int - a function that prints unsigned int
* @n: parameter for int passed to function
* Return: count
*/

int print_u_int(unsigned int n)
{
int count = 0;

if (n / 10)
{
count += print_u_int(n / 10);
}
count += _putchar((n % 10) + '0');

return (count);
}

/**
* print_int - function prints case d and i
* @n: number to print
* Return: number of characters printed
*/

int print_int(int n)
{
int count = 0;

if (n < 0)
{
count += _putchar('-');
n = -n;
}
count += print_u_int((unsigned int)n);

return (count);
}
