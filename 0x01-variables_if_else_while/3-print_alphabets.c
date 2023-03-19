#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - print lower and uppercase
  *
  *Return: Always 0 (success)
  */
int main(void)
{
char i = 'a';
char m = i;
for (; i <= 'z'; i++)
{
putchar(i);
}
for (; m <= 'z'; m++)
{
putchar(m);
}
return (0);
}
