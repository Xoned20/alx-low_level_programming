#include "main.h"
/**
 * main - checks print_last_digit.
 *
 * Return: 0 on success
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('0' - r);
	_putchar('\n');
	return (0);
}
