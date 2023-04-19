#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute func given as param
 * for each arr element
 * @array: arr to iterate
 * @size: arr size
 * @action: pntr to func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
