#include "main.h"

/**
 * pointer_int - a function that prints the address of a pointer
 * @ptr: parameter for pointer
 * Return: count
 */

int pointer_int(void *ptr)
{
	char *hex_digits = "0123456789abcdef";
	int count = 0;
	int pointer_size;
	int shift;
	char hex_char;

	if (ptr == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');

		return (count);
	}

	count += _putchar('0');
	count += _putchar('x');

	pointer_size = sizeof(uintptr_t) * 2; /* uintptr_t, similar to size_t
						 however calculates size of pointer */

	for (shift = (int)(pointer_size - 1) * 4; shift >= 0; shift -= 4)
	{
		hex_char = hex_digits[((uintptr_t)ptr >> shift) & 0xF];

		if (hex_char != '0' || count > 2)
		{
			count += _putchar(hex_char);
		}

	}
	if (count == 2)
	{
		count += _putchar('0');
	}
	return (count);
}
