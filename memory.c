#include "shell.h"

/**
 * bfree - this frees the pointer &  NULLs address
 * @ptr: the address of pointer 2 free
 *
 * Return: if freed 1 , else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}


