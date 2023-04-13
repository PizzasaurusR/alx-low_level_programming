#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate mem block using malloc and free
 *
 * @ptr: pntr to mem allocated to malloc
 * @old_size: size of mem alloc to ptr
 * @new_size: new size of mem alloc to ptr
 *
 * Return: pntr to new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pntr1;
	char *pntr2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (!pntr1)
		return (NULL);
	pntr2 = ptr;
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pntr1[x] = pntr2[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pntr1[x] = pntr2[x];
	}
	free(ptr);
	return (pntr1);
}
