#include <stdio.h>
/**
 * main - prints multiples of 3 and 5 below 1024.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
