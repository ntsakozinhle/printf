#include "main.h"

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
* print_S - function to print custom format specifier S, which prints
* non-printable character in hexadecimal
* @ascii_value: hexadecimal ascii value for non-printable character
* Return: number of characters printed
*/

int print_S(int ascii_value)
{
int count = 0;

if (ascii_value < 10)
{
/*If the digit is less than 10, print it as a regular digit*/
count += _putchar('0' + ascii_value);
}
else
{
/*If the digit is 10 or more, print it as a letter from 'A' to 'F'*/
count += _putchar('A' + ascii_value - 10);
}
return (count);
}

/**
 * print_string - function to print case s
 * @str: pointer to string
 * @is_S: 1,if format specifier is case S, 0 if not
 * Return: number of characters printed
 */

int print_string(char *str, int is_S)
{
int count = 0;
int i = 0;
int ascii_hex_value;
char c;

if (str == NULL)
{
str = "(null)";
}

/*to print the string*/
while (str[i])
{
c = str[i];
if ((is_S == 1) && ((c > 0 && c < 32) || c >= 127))
{
/*Get the ASCII value of c*/
ascii_hex_value = c;

count += _putchar('\\');
count += _putchar('x');
/*Print the first hexadecimal digit*/
count += print_S(ascii_hex_value / 16);
/*Print the last hexadecimal digit*/
count += print_S(ascii_hex_value % 16);
}
else
{
count += print_c(c);
}
i++;
}
return (count);
}
