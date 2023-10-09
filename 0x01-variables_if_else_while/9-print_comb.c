#include <stdio.h>
/*
 * Write a program that prints all possible
 * combinations of single-digit numbers.
 * Numbers must be separated by ',' followed by a space
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(i);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
