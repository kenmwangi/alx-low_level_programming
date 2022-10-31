#include "main.h"

/**
 *   set_bit - function for value of a bit to 1 at a given index.
 *   @n: pointer to a number
 *   @index:
 *   Return: 1 (Sucess) else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
	{
		return (-1);
	}

	bits = 1 << index;

	*n = *n | bits;

	return (1);
}
