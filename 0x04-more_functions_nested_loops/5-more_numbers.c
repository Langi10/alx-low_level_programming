#include "main.h"

/**
 * more_numbers - prints 10 times the number between 0 - 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10, a++)
	{
		for (b = 0; b < 14; b++)
		{
			if (b >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n);
	}
}
