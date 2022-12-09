#include <stdio.h>
/**
 * main - driver code
 * Description: generate numbers from 0 to 9
 * Return: 0 for success
*/
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
return (0);
}
