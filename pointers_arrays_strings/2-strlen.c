#include "main.h"
/**
* _strlen  - function returns the len of a string
* @s: takes in a character
* Return: int
*/
int _strlen(char *s)
{
int i, l = 0;
for (i = 0; s[i] != '\0'; i++)
{
l++;
}
return (l);
}
