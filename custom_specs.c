#include "main.h"

/**
 * p_rev - format specifier to print string in reverse
 * @params: va_list variable
 * Return: length of string printed
 */

int p_rev(va_list params)
{
	int len = 0;
	int x;
	char *str;

	str = va_arg(params, char*);
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
	}
	/* calculate length of string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* print length of string in reverse */
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(str[x]);
	}
	return (len);
}
