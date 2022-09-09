#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - checks if the number stored is positive, negative or zero.
(*
 * Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
	printf("%d is %s\n", n, "negative");
	}
	else
	{
	printf("%d is %s\n", n, "zero");
	}
	return (0);
}
