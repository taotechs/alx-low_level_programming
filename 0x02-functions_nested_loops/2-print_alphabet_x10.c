#include "main.h"
/**
 * function to print alphabets 10 times
 * print alphabets in lowercase x10
 * return void
*/
void print_alphabet_x10(void)
{
	int i;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		putchar('\n');
	for (i = 1; i <= 10; i++)
	{
	print_alphabet_x10();
	}
}
