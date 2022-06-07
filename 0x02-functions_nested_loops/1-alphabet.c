#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 **/
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
