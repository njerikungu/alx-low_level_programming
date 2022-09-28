#include "main.h"

/**
 *is_prime_number - returns 1 if the integer is a prime number
 *@n: integer n
 *Return: 1 if n is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}

/**
 *is_prime - returns 1 if the integer is a prime number
 *@n: integer n
 *@s: number to check from
 *Return: 1 if n isprime
 */

int is_prime(int n,  int s)
{
	if (s <= 1)
	{
		return (1);
	}
	else if (n % s == 0)
	{
		return (0);
	}
	return (is_prime(n, s - 1));
}
