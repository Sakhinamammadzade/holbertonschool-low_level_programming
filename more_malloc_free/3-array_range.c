#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int i;
int *p;
if (min > max)
return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == 0)
return (NULL);
for (i = 0; min <= max; min++, i++)
p[i] = min;
return (p);
}

