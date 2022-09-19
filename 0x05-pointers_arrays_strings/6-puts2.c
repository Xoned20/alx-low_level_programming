#include "main.h"
/**
 * puts2 - ptints character of a string starting with the first letter.
 * @str: test character.
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
