#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 **/
int main(void)
{
        char print[] = "_putchar";

        int ch;

        for (ch = 0; ch < 8; ch++)
        {
                _putchar(print[ch]);
        }
        _putchar('\n');
        return (0);
}
