#include <stdio.h>

/**
 * main - prints single digits in base 10
 *
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10 ; b++)
		putchar((b % 10) + '0');

	putchar('\n');

	return (0);
}

