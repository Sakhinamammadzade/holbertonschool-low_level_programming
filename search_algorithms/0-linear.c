#include "search_algos.h"
/**
 *linear_search- func that searches for a value in array using Linear search
 *@array: point to array
 *@size: size of array
 *value:seaching value
 *Return: index of the value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL || size == 0)
	return -1;
for(i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if(array[i] == value)
{
printf("Value %d found at index %lu\n", value, i);
return i;
}
}
return -1;
}
 
