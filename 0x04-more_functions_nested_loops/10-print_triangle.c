#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)

{

int i, j;
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
_putchar(' ');
for (j = i; j > 0; j--)
_putchar('#');
_putchar('\n');
}
if (size < 1)
_putchar('\n');

}
