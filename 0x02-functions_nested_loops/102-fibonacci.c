#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int a, b, num, i;

	a = 1;
	b = 2;
	num = 3;
	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3; i < 50; i++)
	{
		printf("%ld, ", num);
		a = b;
		b = num;
		num = a + b;
	}
	printf("%ld\n", num);

	return (0);
}
