#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int a, b, s, i;

	a = 1;
	b = 2;
	s = 3;
	printf("%d, ", a);
	printf("%d, ", b);
	for (i = 3; i < 50; i++)
	{
		printf("%d, ", s);
		a = b;
		b = s;
		s = a + b;
	}
	printf("%d\n", s);

	return (0);
}
