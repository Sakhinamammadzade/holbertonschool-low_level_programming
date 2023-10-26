#include "main.h"
/**
 * puts2 - functions prints string
 * @str: The string to reverse
 */
void puts2(char *str)
{
int len = 0;
int j;
char *y = str;
while (*y != '\0')
{
y++;
len++;
}
len = len - 1;
for (j = 0; j <= len; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}

