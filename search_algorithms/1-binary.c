#include "search_algos.h"
/**
 *binary_search - func searches for a value sorted array Binary
 *@array:point to array
 *@size:size of array
 *@value:is the value  to search for
*/
int binary_search(int *array, size_t size, int value)
{
size_t i, left, right;

if (array == NULL || value == 0)
	return (-1);

for (left = 0, right = (size - 1); left <= right;)
{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
}
return (-1);
}
