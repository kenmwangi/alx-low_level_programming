#include "main.h"

/**
 *  puts2 - prints one char out of 2 of a string
 *  by a new line
 *  @str: string to print the chars from
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}


	_putchar('\n');
}
