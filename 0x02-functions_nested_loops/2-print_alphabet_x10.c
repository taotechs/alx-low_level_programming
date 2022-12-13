#include <stdio.h>
#include "main.h"
/**
 * print alphabets in lowercase x10
 * return void
*/
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
		putchar('\n');
}
/**
 * main - drivers code
 * Description: call the print_alphabets function
 * Return: 0 for success
*/
int main(void)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
	print_alphabet_x10();
	}
return (0);
}
