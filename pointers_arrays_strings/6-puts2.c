#include "main.h"
/**
 * puts2 - functions prints string
 * @str: The string to reverse
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
