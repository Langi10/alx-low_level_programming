#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
{
	int *r;

	r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
