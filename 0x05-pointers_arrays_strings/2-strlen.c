/**
 * strlen - Return length of string entered
 * @s: string to be entered
 * retur: length ofthe string
*/
 int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
