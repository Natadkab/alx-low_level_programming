#include <stdio.h>
/*
 * Write a program that prints the alphabet
 * in lowercase, except e and q
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'c' && x != 'q')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
