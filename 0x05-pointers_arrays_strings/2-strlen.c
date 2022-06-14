#include "main.h"

/**
 * _strlen - displays the numbers of characters
 * @s: pointer to be checked
 * Return: i;
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
