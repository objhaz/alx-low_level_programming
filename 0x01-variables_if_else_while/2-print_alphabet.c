#include <stdio.h>
/**
 * main -print all the alphabets in lowwer cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
