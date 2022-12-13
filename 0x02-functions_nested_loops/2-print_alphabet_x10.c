#include "main.h"
/**
 * print_alphabet_x10 - function
 * Description: print alphabets in lowercase x10
 * Return: void
*/
void print_alphabet_x10(void)
{
	int cnt;
	char i;

	for (cnt = 1; cnt <= 10; cnt++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
	}
}
