#include "main.h"

/**
 * factorial - get the factorial of the number
 * @n: number to be factorized
 * Return: n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
