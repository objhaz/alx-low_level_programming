#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
		putchar(10);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
