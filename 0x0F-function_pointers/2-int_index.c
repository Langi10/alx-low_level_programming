#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element of cmp
 * which does not return0. if no elements match
 * return -1, if size <=0 , return 1
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(arrai[i]))
				return (i);
	}
	return (-1);
}
