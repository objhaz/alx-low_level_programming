#include <stdio.h>
/**
 * main - prints all single digit of numbers of base 10 starting 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
	{
		printf("%d",num);
	}
	printf("\n");
	return (0);
}
