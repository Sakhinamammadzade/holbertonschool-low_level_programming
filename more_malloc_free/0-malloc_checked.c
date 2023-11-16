#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: variable to allocate memory for
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *memo;
memo = malloc(b);
if (memo == 0)
exit(98);
return (memo);
}
