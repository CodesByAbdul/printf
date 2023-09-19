#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be print
 * Return: variable that keep track of character print count
 */

int print_number(int n)
{
	/* declare a varible to keep track of characters counts */
	int x = 0;

/* check if n is greater or equal to zero */
	if (n >= 10)
	/* call print_number function to print the remaining digits */
	x = x + print_number(n / 10);

	_putchar(n % 10 + '0'); /* print the last digit number */
	x++; /* increament counter */

	return (x);
}

/**
 * p_i - function that prints integers when d is encountered
 * @params: va_list variable representing arguments passed
 * Return: variable that keep track of character print count
 */

int p_i(va_list params)
{
	int x = 0, n;

	n = va_arg(params, int);
	/* check if number is negative */
	if (n < 0)
	{
	/* if negative, print minus sign and make number poistive */
		_putchar('-');
		x++;
		if (n == INT_MIN)
		{
			_putchar('2');
			x++;
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n >= 10)
		x = x + print_number(n / 10);

	_putchar(n % 10 + '0');
	x++;

	return (x);
}

/**
 * p_d - function that prints integer when i is encountered
 * @params: va_list variable representing the arguments passed
 * Return: variable that keep track of character print count
 */

int p_d(va_list params)
{
	int x = 0, n;

	n = va_arg(params, int);
	if (n < 0)
	{
		_putchar('-');
		x++;
		if (n == INT_MIN)
		{
			_putchar('2');
			x++;
			n = 147483648;
		}
		else
			n = -n;
	}
	if (n >= 10)
		x = x + print_number(n / 10);

	_putchar(n % 10 + '0');
	x++;

	return (x);
}

/**
 * p_bi - function that prints binary
 * @params: va_list variable representing the argument passed
 * Return: printed character count
 */

int p_bi(va_list params)
{
	unsigned int n;
	int x, count = 0;
	int binary[32]; /* assuming 64-bit integers */

	n = va_arg(params, unsigned int);

	/* convert the decimal number to binary */
	for (x = 31; x >= 0; x--)
	{
	/* divide by 2 and also take modulo by two */
   /* to convert decimal base 10 to binary base 2 */
		binary[x] = n % 2;
		n = n / 2;
	}
	/* find the first non-zero digit */
	for (x = 0; x < 32; x++)
	{
		if (binary[x] == 1)
			break;
	}
	/* print the binary representation */
	for (; x < 32; x++)
	{
		_putchar(binary[x] + '0');
		count++; /* increament count */
	}
	return (count);
}
