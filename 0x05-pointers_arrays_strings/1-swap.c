#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: integer to  swap
 * @b: integer to be swap
 */

void swap_int(int *a, int *b)
{

	int  m;
	
	m = *a;
	*a = *b;
	*b = m;
}
