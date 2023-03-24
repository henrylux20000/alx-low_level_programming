#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - 2 and 4
 */
void print_most_numbers(void)
{
int a = 0 + '0';
for (; a <= 9 + '0'; a++)
{
if (a == 2 + '0' || a == 4 + '0')
{
continue;
a++;
}
_putchar(a);
}
_putchar('\n');
}
