#include "main.h"
/**
*_isalpha-function checks alphabetic character
*
*@c:the characters is input
* Return: 1 for lowercase. 0 for the rest.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
