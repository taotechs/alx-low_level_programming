#include <stdio.h>
#include <stdlib.h>
/**
 * This program prints all alphabets
 * it returns 0 at the end of the program
*/
int main(void)
{
char test;
for (test= 'a'; test< 'z'; test++)
{
putchar(test);
}
putchar('\n');    
return 0;
}
