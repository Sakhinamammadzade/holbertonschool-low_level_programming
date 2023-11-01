#include "main.h"
/**
 *_print_rev_recursion - a function prints a string a new line
 *@s: char character
 *Return: copied memory with n byted changed
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
}
_putchar('\n');
}
