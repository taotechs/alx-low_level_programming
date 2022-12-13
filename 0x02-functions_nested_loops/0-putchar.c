#include <stdio.h>
/**
 * main  Drivers code for program by taotechs
 * Description: This program prints _putchar
 * Return: Always 0 (success)
*/
int main(void){
char msg[] = "_putchar\n";
int i;
for (i = 0; i < 13; i++)
{
	if (msg[i] == '\n')
	{
	putchar('\n');
	break;
	}
	else
	{
	putchar(msg[i]);
	}
}
return (0);
}
