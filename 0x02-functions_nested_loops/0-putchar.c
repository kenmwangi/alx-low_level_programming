#include <unistd.h>

/*
 * _putchar - writes character c to stdout
 * c - character print
 * return 0: Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
