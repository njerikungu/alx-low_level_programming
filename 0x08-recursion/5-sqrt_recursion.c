#include "main.h"

/**
 *_sqrt - returns squareroot
 *@n: squareroot number
 *@r: squared number
 *Return: squareroot of n
 */

int _sqrt(int n, int r)
{
	if (n > r / 2)
	{
		return (-1);
	}
	else if (n * n == r)
	{
		return (n);
	}

		return (_sqrt(n + 1, r));
}

/**
 *_sqrt_recursion - returns squareroot
 *@n: squareroot number
 *Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
