	Introduction: 

Welcome to the Custom Printf Project by Osaretin Monday Igbineweka and Abdulrahman Adigun! Our objective here is to create a customised version of the printf function in the C programming language. While the standard printf function is commonly used for displaying formatted text to the standard output, our project aims to replicate its functionality.

	Features

This custom printf function provides comprehensive support for various conversion specifiers and flag characters, including custom ones.
Conversion Specifiers: %c - Character: Our custom printf can handle the %c specifier, allowing you to print individual characters. %s - String: You can utilise %s to print strings using our custom printf function, similar to the standard printf. %% - Percent Sign: The double percent sign (%%) is employed to print a literal '%' character. %d and %i - Integer: Both %d and %i are compatible for printing integers. You can use either of these specifiers to display integer values. %p - Pointer: The %p specifier enables you to print memory addresses, which can be highly valuable for debugging. Hexadecimal, Octal, Binary, Unsigned, and Lowercase Hex (x, X, o, b, u): Our custom printf supports these standard numeric conversion specifiers, enabling you to print numbers in various formats. Custom Conversion Specifiers: %r and %R - Custom Specifiers: We've introduced our own custom conversion specifiers, %r and %R, to offer unique functionalities that extend beyond the capabilities of the standard printf function.

	Implementation Details

Our custom printf function has been meticulously designed and coded to replicate the functionality of the original printf in C. We've invested significant effort to ensure its accurate handling of a wide range of conversion specifiers and flag characters. Extensive testing has been conducted to validate its reliability and correctness.

	Usage

To utilise our custom printf  function, simply include it in your C code and invoke it just as you would with the standard printf function. Ensure that you provide the appropriate format string and arguments

#include “main.h”

Int main()
{
	_printf(“Hello %s! Today is %dth of september.\n”, “World”, 20);

	Return (0);
}


	Contributions

We warmly welcome contributions and feedback from the community. If you encounter any issues or have suggestions for improvements, please feel free to open an issue or create a pull request on our GitHub repository.

	Conclusion:

Our custom printf function is the outcome of meticulous effort and meticulous attention to detail, designed to emulate the behaviour of the original printf function while also introducing custom functionality. We have endeavoured to ensure accuracy, flexibility, and ease of use, and we are eagerly anticipating your experimentation with it in your C programming projects. Should you encounter any issues or have suggestions for enhancements, please do not hesitate to reach out. Happy coding!

