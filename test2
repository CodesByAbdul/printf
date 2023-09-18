#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
		int num1, num2;

		printf("%d\n", 65176);
        _printf("%d\n", 65176);
        printf("%d\n", -777765176);
        _printf("%d\n", -777765176);
        printf("%d\n", 00002);
        _printf("%d\n", 00002);
        printf("%d\n", 0);
        _printf("%d\n", 0);
        printf("%d\n", 7);
        _printf("%d\n", 7);
        printf("%d\n", -2255445);
        _printf("%d\n", -2255445);
        printf("Maximum value of int: %d\n", INT_MAX);
        _printf("Maximum value of int: %d\n", INT_MAX);
        printf("Minimum value of int: %d\n", INT_MIN);
        _printf("Minimum value of int: %d\n", INT_MIN);
        printf("--------------------------------\n");
        printf("%i\n", 65176);
        _printf("%i\n", 65176);
        printf("%i\n", 0);
        _printf("%i\n", 0);
        printf("%i\n", -2255445);
        _printf("%i\n", -2255445);
        printf("Maximum value of int: %i\n", INT_MAX);
        _printf("Maximum value of int: %i\n", INT_MAX);
        printf("Minimum value of int: %i\n", INT_MIN);
        _printf("Minimum value of int: %i\n", INT_MIN);
		num1 = _printf("A %s sentence\n", "simple");
    	num2 = printf("A %s sentence\n", "simple");
    	printf("Len:[%d]\n", num1);
    	_printf("Len1:[%d]\n\n", num2);

    	num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
    	num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
    	printf("Len:[%d]\n", num1);
    	_printf("Len1:[%d]\n\n", num2);

    	num1 = _printf("A simple %v entence\n");
    	num2 = printf("A simple %v entence\n");
    	printf("Len:[%d]\n", num1);
    	_printf("Len1:[%d]\n\n", num2);

    	num1 = _printf("Percentage: %%\n");
    	num2 = printf("Percentage: %%\n");
    	printf("Len:[%d]\n", num1);
    	_printf("Len1:[%d]\n\n", num2);

		return (0);
}
