#include "main.h"
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 * Islower - Test if a letter is lowercase or not
 * Description: code checker
 * Return: islower valui
*/
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)

{

	/* refer int c*/

	if (c == i)
	{
	return (1);
	}
}
return (0);
}
