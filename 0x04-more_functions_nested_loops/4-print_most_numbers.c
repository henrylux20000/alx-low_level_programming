#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - 2 and 4
 */
void print_most_numbers(void)
{
int a = 0 + '0';
while (a <= 9 + '0')
{
if (a == 2 + '0' || a == 4 + '0')
{
continue;
a++;
}
_putchar(a);
a++;
}
_putchar('\n');
}
