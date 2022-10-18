#include <stdio.h>
/**
 * main -prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int b;
	char la;

	for (b = 0; b < 10; b++)
		putchar ((b % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0)
}

