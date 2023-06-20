#include  <unistd.h>


/**
 * _putchar - writes the character C to stdout 
 * @c: The charactert to print 
 * Return: On success 1. 
 * On error, -1 is return, and errno is set appropriately. 
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
} 
