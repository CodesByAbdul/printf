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

/**
 * p_rot13 - custom format specifier to print rot13
 * @params: va_list variable
 * Return: length of printed string
 */

int p_rot13(va_list params)
{
	int y, len = 0;
	char *str;
	char *tmp;
	char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	tmp = va_arg(params, char*);
	str = malloc(sizeof(tmp) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	strcpy(str, tmp);/*copy original string to the new string */
	for (len = 0; str[len] != '\0'; len++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[len] == orig[y])
			{
				str[len] = rot13[y];
				_putchar(str[len]);
				break;
			}
		}
	}
	free(str);
	return (len);
}
