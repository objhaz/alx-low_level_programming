#include <stdio.h>

/**
 * main -  checks for the highest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	long divisor, num;

	num = 612852475143;

	for (divisor = 2; num > divisor; divisor++)
	{
		while (num % divisor == 0)
		{
			num = num / divisor;
		}
	}
	printf("%lu", divisor);
	putchar('\n');
	return (0);
}
