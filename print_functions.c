#include "main.h"

/**
* print_int - function that prints an integer
* @n: number to be printed
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
* print_c - function that prints a character from arguments
* @c: character to be printed
* Return: printed character
*/

int print_c(char c)
{
return (_putchar(c));
}

/**
* print_string - function that prints string from arguments
* @str: pointer to the string
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
