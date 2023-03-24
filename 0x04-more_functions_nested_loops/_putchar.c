#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character
 * @c: print the character
 *
 * Return: 1 success
 * On error. -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
