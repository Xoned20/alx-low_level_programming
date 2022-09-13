#include "main.h"
/**
 * print_alphabet - prints the alphabet from a to z in lowercase.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
