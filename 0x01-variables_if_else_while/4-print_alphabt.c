#include <stdio.h>

/**
 * main - print alpha in low
 * followed by max line except q an e
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la = 'z'; la++)
	{
		for (la : = 'e' && la : = 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}

