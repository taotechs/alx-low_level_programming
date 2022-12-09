#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints two digits combination with some conditions
 * Return: Always 0 (success)
 */
int main(void)
{
	int num, i;

	for (num = '0'; num <= '9'; num++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (num < i)
			{
				putchar(num);
				putchar(i);
				if (num != '8' || (num == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
	}
			}
		}
	}
	putchar('\n');
	return (0);
}
