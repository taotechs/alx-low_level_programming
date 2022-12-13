#include "main.h"
/**
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
