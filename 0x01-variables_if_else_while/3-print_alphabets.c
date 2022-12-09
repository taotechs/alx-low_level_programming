#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by taotechs
 * Description: This program prints all alphabetsb oth upper and lower case
 * Return: it returns 0 at the end of the program
*/
int main(void)
{
char test;
for (test = 'a'; test <= 'z'; test++)
{
putchar(test);
}
for (test = 'A'; test <= 'Z'; test++)
{
putchar(test);
}
putchar('\n');
return (0);
}
