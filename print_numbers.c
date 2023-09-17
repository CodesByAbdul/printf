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
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
	/* if negative, print minus sign and make number poistive */
		_putchar('-');
		n = -n;
		x++; /* increament counter */
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
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		x++;
	}
	if (n >= 10)
		x = x + print_number(n / 10);

	_putchar(n % 10 + '0');
	x++;

	return (x);
}
