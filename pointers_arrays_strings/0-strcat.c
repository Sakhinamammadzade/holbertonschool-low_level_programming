#include "main.h"
/**
* _strcat - function concat two string
* @dest: takes in a character/digit
* @src: takes string
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];	
j++;
i++;
}
return (dest);
}
