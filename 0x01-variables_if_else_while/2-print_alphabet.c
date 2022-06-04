#include <stdio.h>
/**
 * main - Prints all letters of the alphabet in lowwer cases
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
