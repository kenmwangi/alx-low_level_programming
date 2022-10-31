#include "holberton.h"
/**
 *   binary_to_uint - Entry Point
 *   @b: const char
 *   Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num;

	if (!b || !*b)
	{
		return(0);
	}

	num = i = 0;

	while (b[i])
	{
		if (b[i] > 49)
		{
			return (0);
		}
		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
		{
			num <<= 1;
		}

		i++;
	}

	return (num);
}
