#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates meory
 * @b: integer signed a value
 * return: pointer to the memory
 **/
void *malloc_checked(unsigned int b)
{
	void *P = malloc(b);

	if (P == NULL)
	{
		exit(98);
	}

	return (P);
}
