#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int i, a, b, j, c, d, e, f, g, y, k;

	i = 1;
	j = 2;
	e = i + j;

	printf("%ld, ", i);
	printf("%ld, ", j);
	for (y = 3; y < 89; y++)
	{
		printf("%ld, ", e);
		i = j;
		j = e;
		e = i + j;
	}
	c = j / 1000000000;
	d = j % 1000000000;
	f = e / 1000000000;
	g = e % 1000000000;
	for (k = 89; k < 98; k++)
	{
		printf("%ld%ld, ", f, g);
		a = c;
		b = d;
		c = f;
		d = g;
		f = a + c + ((b + d) / 1000000000);
		g = (b + d) % 1000000000;
	}
printf("%ld%ld\n", f, g);
	return (0);
}
