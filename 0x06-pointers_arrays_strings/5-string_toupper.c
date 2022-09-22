#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase to upper.
 * @str: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
			*(str + count) = *(str + count) - 32;
			count++;
	}

	return (str);
}
