#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char m;
int b = 0 + '0';
while (b <= 9 + '0')
{
putchar(b);
b++;
}
for (m = 'a'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
