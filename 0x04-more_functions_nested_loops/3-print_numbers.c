#include "main.h"
#include "_putchar.c"

/**
 * print_numbers - print num from from 0 -9
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}
