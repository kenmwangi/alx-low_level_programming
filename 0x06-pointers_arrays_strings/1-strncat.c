#include "main.h"

/**
 *  strncat - concatenates n bytes from a string to another
 *  @dest: destination string
 *  @src: source string
 *  @n: number of bytes of str to concatenate
 *  Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	if (j < n)
		*(dest + i) = *(src + j);

	return (dest);
}
