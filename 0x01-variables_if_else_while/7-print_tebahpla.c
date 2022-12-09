#include <stdio.h>
#include <stdlib.h>
/**
 * main - drivers code by taotechs
 * Description: This program prints all alphabets in reverse order
 * Return: it returns 0 at the end of the program
*/
int main(void)
{
char test;
for (test = 'z'; test >= 'a'; test--)
{
putchar(test);
}
putchar('\n');
return (0);
}
