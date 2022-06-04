#include <stdio.h>

/**
 * main - print pairs of double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			l = j + 1;
			k = i;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i < 57 || j < 56 || k < 57 || l < 57)
					{
						putchar(',');
						putchar(' ');
					}
					m++;
				}
				l = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
