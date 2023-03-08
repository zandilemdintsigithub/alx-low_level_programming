#include "main.h"
#include <stdio.h>

/**
 * _sqrt - returns natural square root of a number
 * @n: number to calculate square root
 * @i: iterate number
 * Return: Always 0
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (1);

	return (_sqrt(n, i + 1));
}
