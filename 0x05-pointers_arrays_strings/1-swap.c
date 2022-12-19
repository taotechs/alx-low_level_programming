/**
 * swap_int - swap values of pointers
 * @a: first pointer
 * @b: second pointer
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

