#include <stdio.h>

/**
 * main - Prints all possible  combinations of two  different digits,
 * in ascending order, seperated by a commma followed by a space.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 0; digit < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digits2 < 10; digits2++)
		{
			putchar((digits1 % 10) + '0');
			putchar((digits2 % 10) + '0');

			if (digits1 == 8 && digits2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
