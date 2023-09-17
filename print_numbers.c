#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be print
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0) /* Check if the input number is negative */
	{
		n1 = -n; /* Take the absolute value of n */
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
/* Recursively call print_number to print digits from left to right */
	if (n1 / 10)
	{
		print_number(n1 / 10); /* Recursive call with n1 divided by 10 */
	}

	_putchar((n1 % 10) + '0'); /* Print the digit by converting to ASCII */
}

/**
 * p_int1 - function that prints integers when d is encountered
 * @params: va_list variable representing arguments passed
 * Return: 0 (success)
 */

int p_int1(va_list params)
{
	int x;

	x = va_arg(params, int);
	print_number(x);

	return (0);
}

/**
 * p_int2 - function that prints integer when i is encountered
 * @params: va_list variable representing the arguments passed
 * Return: 0 success
 */

int p_int2(va_list params)
{
	int x;

	x = va_arg(params, int);
	print_number(x);

	return (0);
}
