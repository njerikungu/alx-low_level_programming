#include "main.h"

/**
 *_pow_recursion - returns the value of xraised to the power of y
 *@x: value to be powered
 *@y: value to be powered by
 *Return: value of power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
