#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: arr to search
 * @size: arr size
 * @cmp: pntr to comp func
 *
 * Return: -1 if no match of size = negative,
 * index for first element cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}

	return (-1);
}
