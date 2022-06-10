#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: value for the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
			if (j >= i)
				_putchar(35);
			else
				_putchar(32);
		_putchar('\n');
	}
}
