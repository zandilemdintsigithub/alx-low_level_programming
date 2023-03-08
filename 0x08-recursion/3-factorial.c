#include "main.h"

/**
 * factorial - return factorial of a number
 * @n: number of factorial value
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
