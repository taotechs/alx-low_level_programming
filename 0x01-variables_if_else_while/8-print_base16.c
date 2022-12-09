#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by taotechs
 * Descripton: This program prints all alphabets
 * Return: it returns 0 at the end of the program
*/
int main(void)
{
char test;
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (test = 'a'; test <= 'f'; test++)
{
putchar(test);
}
putchar('\n');
return (0);
}
