#include "main.h"


/**
 * _strncpy - copy string number
 * @dest: store string of n byte into dest
 * @src: input value of source string
 * @n: value of bytes copied from src
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
