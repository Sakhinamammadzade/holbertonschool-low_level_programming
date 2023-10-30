#include "main.h"
/**
 *_puts_recursion - a function prints a string a new line
 *@s: char character
 *Return: copied memory with n byted changed
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
