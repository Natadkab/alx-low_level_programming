#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('%d', i);
		i++;
	}
	_putchar('\n');
}
