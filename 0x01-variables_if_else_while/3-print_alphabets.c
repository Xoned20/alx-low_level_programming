#include <stdio.h>
/**
 * main - prints the alphabeth in lowercase then uppercase.
 *
 *Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
