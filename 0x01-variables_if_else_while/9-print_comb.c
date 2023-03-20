#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a = 0 + '0';
while (a <= 9 + '0')
{
putchar(a);
a++;
putchar(',');
putchar('');
}
putchar('\n');
return (0);
}
