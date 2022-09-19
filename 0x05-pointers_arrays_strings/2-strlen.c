/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the character array.
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
