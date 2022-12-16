#include "main.h"

/**
 * _isupper - checks for an uppercase character
 * @c: input character
 * Return: 1 if an uppercase chatacter, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
