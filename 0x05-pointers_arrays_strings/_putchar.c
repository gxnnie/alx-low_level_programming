#include "main.h"
#include <unistd.h>
/**
 * _putchar - write what the function does
 * @c: the character to be printed
 * Return: 1
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
