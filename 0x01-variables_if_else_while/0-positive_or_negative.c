#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Description: checking number and printing out appropriate output
 * Return: Alway 0 whic denotes success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive", n);
}
else if (n == 0)
{
	printf("%d is zero", n);
}
else
{
	printf("%d is negative", n);
}
return (0);
}
