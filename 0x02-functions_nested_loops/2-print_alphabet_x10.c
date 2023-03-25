#include "main.h"

/**
 * print_alphabet_x10 - print letter
 */
void print_alphabet_x10(void)
{
char b;
int a;
while (a < 10)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
b++;
}
_putchar('\n');
a++;
}
}
