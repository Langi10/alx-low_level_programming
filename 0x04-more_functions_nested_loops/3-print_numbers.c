#include "main.h"

/**
 * print_numbers - prints numbers between 0 and 9
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = 0, c <= 9, c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
