#include "main.h"
#include <unistd.h>

/**
 * _putchart - write the character
 * @c: print the character
 *
 * Return: 1 success
 * On error. -1 is returned
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
