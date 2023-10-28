#include<stdio.h>
#include "main.h"
/**
 *_strncpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
  @n: bytes to be copied from source string
 *Return: not.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
