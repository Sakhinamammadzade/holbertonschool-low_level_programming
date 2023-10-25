#include "main.h"
/**
* rev_string - function returns the len of a string and reverse it
* @s: takes in a character
* Return: void
*/
void rev_string(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
{

}
for (len = len - 1; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
