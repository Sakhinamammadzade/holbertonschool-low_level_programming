#include "main.h"
#include <stdio.h>
/**
* _strncat - function concat two string
* @dest: takes in a character/digit
* @src: takes string
* @n:integer
* Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
i++;
for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

