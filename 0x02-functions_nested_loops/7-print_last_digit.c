#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: int type number
 * Return: return value of last digit
 */
int print_last_digit(int num)
{
	int lv;

	if (num  < 0)
	{
		lv = -1 * (num % 10);
		_putchar(lv + '0');
		return (lv);
	}
	else
	{
		lv = num % 10;
		_putchar(lv + '0');
		return (lv);
	}
}
