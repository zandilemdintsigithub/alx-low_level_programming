#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: memory to be filled
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for  (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
