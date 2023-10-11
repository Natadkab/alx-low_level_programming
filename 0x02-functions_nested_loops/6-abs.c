#include "main.h"
/**
 * _abs - entry point
 *
 * Return - Absolute value or zero
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

