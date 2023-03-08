#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt - returns natural square root of a number
 * @n: number to calculate square root
 * @i: iterate number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate square root
 * @n: number to calculate squre root
 * @i: iterate value
 * Return: Always 0
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
