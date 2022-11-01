#include "main.h"

/**
 *   set_bit - function for value of a bit to 1 at a given index.
 *   @n: pointer to a number
 *   @index: changin index
 *   Return: 1 (Sucess) else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
