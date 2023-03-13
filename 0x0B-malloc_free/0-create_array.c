#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char to sign
 * Description: create array of size and assign char c
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
