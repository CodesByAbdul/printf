#include "main.h"

/**
 * p_unsigned - function to print an unsigned integer.
 * @params: va_list variable
 * Return: number of characters printed
 */

int p_unsigned(va_list params)
{
	unsigned int n;
	int x = 0;

	n = va_arg(params, unsigned int);
	if (n >= 10)
	{
		x = x + print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	x++;

	return (x);
}

/**
 * p_oct - function that prints octal numbers
 * @params: va_list variable to save parameters
 * Return: x (counter for the number of octal digits)
 */

int p_oct(va_list params)
{
	unsigned int n, tmp;
	int *octArr;
	int x = 0, y;

	n = va_arg(params, unsigned int);
	tmp = n;
/* count how many octal digit are in the number and divide by 8 */
	while (n / 8 != 0)
	{
		n = n / 8;
		x++;
	}
	x++; /*increament x to account for last digit */
	octArr = malloc(sizeof(int) * x);/*allocate memory to store the octal digits*/
	/*check if memory allocation failed */
	if (octArr == NULL)
	{
		return (-1);
	}
	/* convert number to octal and store digits in the octArr */
	for (y = 0; y < x; y++)
	{
		octArr[y] = (tmp % 8) + '0';
		tmp = tmp / 8;
	}
	/* print octal digit in reverse order */
	for (y = x - 1; y >= 0; --y)
	{
		_putchar(octArr[y]);

	}
	free(octArr);
	return (x);
}

/**
 * p_hex - function that prints hexadecimal numbers in lowercase
 * @params: va_list variable to save parameters
 * Return: x (counter for the number of hexadecimal digits)
 */

int p_hex(va_list params)
{
	unsigned int n, tmp;
	int x = 0, y;
	int *hexArr;

	n = va_arg(params, unsigned int);
	tmp = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		x++;
	}
	x++;
	hexArr = malloc(sizeof(int) * x);
	if (hexArr == NULL)
	{
		return (-1);
	}
	for (y = 0; y < x; y++)
	{
		hexArr[y] = tmp % 16;
		tmp = tmp / 16;
	}
	for (y = x - 1; y >= 0; y--)
	{
		if (hexArr[y] > 9)
		{
			/* convert digits a to f to their corresponding characters */
			/* by adding the difference of 97 and 58 */
			hexArr[y] = hexArr[y] + (97 - 58);
		}
		_putchar(hexArr[y] + '0');
	}
	free(hexArr);
	return (x);
}

/**
 * p_HEX - function that prints hexadecimal numbers in uppercase
 * @params: va_list variable to save parameters
 * Return: x (counter for the number of hexadecimal digits)
 */

int p_HEX(va_list params)
{
	unsigned int n, tmp;
	int x = 0, y;
	int *HEXarr;

	n = va_arg(params, unsigned int);
	tmp = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		x++;
	}
	x++;
	HEXarr = malloc(sizeof(int) *  x);
	if (HEXarr == NULL)
	{
		return (-1);
	}
	for (y = 0; y < x; y++)
	{
		HEXarr[y] = tmp % 16;
		tmp = tmp / 16;
	}
	for (y = x - 1; y >= 0; y--)
	{
		if (HEXarr[y] > 9)
		{
			HEXarr[y] = HEXarr[y] + (65 - 58);
		}
		_putchar(HEXarr[y] + '0');
	}
	free(HEXarr);
	return (x);
}