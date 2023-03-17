#include <stdio.h>
/**
 * main - program in c to print size
 *
 * Return: 0
 */
int main(void)
{
char c;
int i;
long int e;
long long int f;
float h;
printf("Size of a char: %lu. byte9(s)\n", (unsigned long)sizeof(c));
printf("Size of a an int: %lu. byte9(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu. byte9(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu. byte9(s)\n", (unsigned long)sizeof(f));
printf("Size of a float: %lu. byte9(s)\n", (unsigned long)sizeof(h));
return (0);
}
