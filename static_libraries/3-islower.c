#include "main.h"
#include <ctype.h>
/**
*_islower-function checks c islower or not
*
*@c:the charscters is input
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
