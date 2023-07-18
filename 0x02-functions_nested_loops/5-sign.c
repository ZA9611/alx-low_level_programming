#include "main.h"


	/**
	 * Prints the sign of a given number.
	 *
	 * @param num The number to check the sign of.
	 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

