#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alpha in low
 * followed by max line except q an e
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');

	return (0);
}

