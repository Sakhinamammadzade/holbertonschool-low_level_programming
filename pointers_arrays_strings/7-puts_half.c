#include "main.h"
/**
* puts_half - functions prints half of  string
* @str: The string half
***/
void puts_half(char *str)
{
int len = 0;
int j;
char *y = str;
while (*y != '\0')
{
y++;
len++;
}
if (len % 2 == 0)
{
j = len / 2;
}
else
{
j = (len + 1) / 2;
}
for (; j < len; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
