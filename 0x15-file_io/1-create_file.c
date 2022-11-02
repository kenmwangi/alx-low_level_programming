#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *   create_file - function that creates a file.
 *   @filename: variable pointer
 *   @text_content: content file
 *   Description: Create a function that creates a file.
 *   Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_CREAT | O_WRONGLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	write(file, text_content, i);

	return (1);
}
