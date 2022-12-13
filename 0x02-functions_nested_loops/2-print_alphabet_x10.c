#include "main.h"
/**
 * function to print alphabets 10 times
 * print alphabets in lowercase x10
 * return void
*/
void print_alphabet_x10(void)
{
	int cnt;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	for (cnt = 1; cnt <= 10; cnt++)
	{
	print_alphabet_x10();
	}
}
