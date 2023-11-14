#include "main.h"

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
if (n / 10)
{
count += print_int(n / 10);
}
count += _putchar((n % 10) + '0');

return (count);
}

/**
* print_c - function prints character as determined by the format specifier
* @c: character to be printed
* Return: character printed
*/

int print_c(char c)
{
return (_putchar(c));
}

/**
* print_string - function to print case s
* @str: pointer to string
* Return: number of characters printed
*/

int print_string(char *str)
{
int count = 0;

if (str == NULL)
return (count);
while (*str != '\0')
{
print_c((int)*str);
count++;
str++;
}
return (count);
}
