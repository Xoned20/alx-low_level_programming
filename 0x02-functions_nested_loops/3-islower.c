#include "main.h"
#include<ctype.h>
/**
 * _islower - checks if the character is lower.
 *
 * @c: test character
 *
 * Return: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else
		return (0);
}
