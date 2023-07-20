#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		i++; // Increment the loop control variable to avoid the infinite loop.
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
