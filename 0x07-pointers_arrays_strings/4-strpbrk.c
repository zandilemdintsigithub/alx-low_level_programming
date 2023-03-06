#include <stdio.h>
#include "main.h"

/**
 * _strbrk - search a string
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
