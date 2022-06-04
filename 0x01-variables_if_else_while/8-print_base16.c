#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
