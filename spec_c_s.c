#include "main.h"

/**
 * p_c - function to check for characters
 * @params: the va_list variable declared
 * Return: number of characters printed to output
 */

int p_c(va_list params)
{
	char ch;
	int char_count = 0;

	ch = va_arg(params, int);
	_putchar(ch);
	char_count++;
	return (char_count);
}

/**
 * p_str - function to print a string when s is passed
 * @params: va_list variable declared
 * Return: number of characters printed to output
 */

int p_str(va_list params)
{
	int x, char_count = 0;
	char *str;

	str = va_arg(params, char*);
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (-1);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
		char_count++;
	}

	return (char_count);
}

/**
 * p_per - function to print the % sign when encountered
 * @params:va_list vairiable declared
 * Return: number of characters printed to output
 */

int p_per(va_list params __attribute__ ((unused)))
{
	int char_count = 0;

	_putchar('%');
	char_count++;

	return (char_count);
}
