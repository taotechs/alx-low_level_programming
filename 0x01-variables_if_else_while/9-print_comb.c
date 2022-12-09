#include <stdio.h>
#include <stdlib.h>
/**
 * main - drivers code by taotechs
 * Description: This program prints all alphabets with commas and spaces
 * Return: it returns 0 at the end of the program
*/
int main(void)
{
int test;
for (test = 0; test <= 9; test++)
{
putchar(test + '0');
if (test < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
