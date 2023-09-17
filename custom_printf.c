#include "main.h"

/**
 * _printf - function that formats a string and print output to
 * standard output.
 * @format: character string composed of zero of more directive
 * Return: Numbers of characters printed excluding null byte
 */

int _printf(const char *format, ...)
{
	int x, char_count = 0, y, spec_found = 0;
	va_list params;
/* create array of fmt struct, match specifier to corresponding function */
	fmt specs_arr[] = { {"c", p_c}, {"s", p_str},
						{"%", p_per},
						{NULL, NULL}
	};

	va_start(params, format);
	if (format == NULL) /* check if the format string is empty */
		return (-1);
	for (x = 0; format[x] != '\0'; x++)
	{
		/* check if zero directive is pass and print string */
		if (format[x] != '%' || format[x + 1] == '\0')
		{
			_putchar(format[x]);
			char_count++;
		}
		else /* handles various specifiers encoutered */
		{
			for (y = 0; *(specs_arr[y].specs) != '\0'; y++)
			{
				if (format[x + 1] == *(specs_arr[y].specs))
				{
					if (specs_arr[y].ptf != NULL)
					{
				/* call the corresponding function in the arrays of function */
						char_count += specs_arr[y].ptf(params);
						x++;
						spec_found++;
					}
					else
						return (-1);
					break;
				}
			}
			if (!spec_found) /* if no match is found print % to output */
			{
				_putchar('%');
				return (-1);
			}
		}
	}
	va_end(params);
	return (char_count);
}
