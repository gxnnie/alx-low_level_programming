#include "main.h"

/**
 * more_numbers - prints 0 t0 14 then times
 * Return: 0
 */
void more_numbers(void)
{
	int num, a;

	for (a = 0; a <= 0; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) - '0');
		}

		_putchar('\n');
	}
}
