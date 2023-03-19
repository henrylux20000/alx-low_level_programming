#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
  *main - print lower and uppercase
  *
  *RETURN: Always 0 (success)
  */
  
  
int main(void)
{
int i;
char letter[ ] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
char ch;
for (i = 0; ch = letter[i]; i++)
{
putchar(tolower(ch));
}
for (i = 0; ch = letter[i]; i++)
{
putchar(toupper(ch));
}
return (0);
}
