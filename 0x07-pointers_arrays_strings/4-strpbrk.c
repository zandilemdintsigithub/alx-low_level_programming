#include "main.h"
/**
 * _strbrk - search a string
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
