#include <stdio.h>
/*
 * Write a program that prints all single digit number
 * by using putchar and not using char
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
