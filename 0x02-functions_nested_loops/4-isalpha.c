#include "main.h"
#include<ctype.h>
/**
 * _isalpha - checks for an alphabetical character.
 *
 * @c: test character
 *
 * Return: 1 if letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
