#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @num: The integer to prints.
  *
  * Return: Nothing!
  */
void print_number(int num)
{
	unsigned int i = num;

	if (num < 0)
	{
		num *= -1;
		i = num;
		_putchar('-');
	}

	i /= 10;

	if (i != 0)
		print_number(i);

	_putchar((unsigned int) num % 10 + '0');

}
