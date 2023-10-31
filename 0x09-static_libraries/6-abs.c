#include "main.h"
/**
 * _abs - entry point
 * @c: the numbe to be computed
 * Return: Absolute number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}

