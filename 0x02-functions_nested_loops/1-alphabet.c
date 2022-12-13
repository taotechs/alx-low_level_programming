#include <stdio.h>
/**
 * print alphabets in lowercase
 * return void
*/
void print_alphabet(void)
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
print_alphabet();
return (0);
}
