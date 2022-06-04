#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int b = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}

		a++;
	}

	putchar('\n');

	return (0);
}
