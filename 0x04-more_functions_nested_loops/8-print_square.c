#include "main.h"

/**
* print_square - prints a square
* @size: size of square
* Return: none
**/

void print_square(int size)
{
	int i, c;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
