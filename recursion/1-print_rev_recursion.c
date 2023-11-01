#include "main.h"
/**
 *_print_rev_recursion - a function prints a string a new line
 *@s: char character
 *Return: copied memory with n byted changed
 */
void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
if (*s)
{
_print_rev_recursion(s + 1);
}
_putchar('\n');
=======
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
>>>>>>> 714b8e677819868258d480be7a7a8bc0d9d6bf9f
}
