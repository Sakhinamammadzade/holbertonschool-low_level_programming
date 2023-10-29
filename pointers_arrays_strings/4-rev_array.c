#include "main.h"
#include <stdio.h>
/**
* reverse_array - function returns the len of a string
* @a: takes in a character
* @n:takes in a char
* Return: void
*/
void reverse_array(int *a, int n)
{
int i, last;
last = n - 1;
for (i = 0; i < n / 2; i++)
{
int start, end;
start = a[i];
end = a[last];
a[i] = end;
a[last] = start;
last--;
}
}

