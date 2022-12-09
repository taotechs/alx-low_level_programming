#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * This prints the last digit of a number and output some stuffs
 * Below is the main driver code
 */
int main(void)
{
int n,x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x= n%10;
if(x>5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, x);
}
else if (x < 6 && x!=0)
{
	printf("Last digit of %d is %d and is not 0\n", n, x);
}
return (0);
}
