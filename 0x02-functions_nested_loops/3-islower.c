#include "main.h"
#include<ctype.h>
/**
 * _isLower - checks if the character is lower.
 *
 * Return: 1 if lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}else
	{
		return (0);
	}
}
