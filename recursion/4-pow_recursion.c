#include "main.h"
/**
*  _pow_recursion  - function returns pow recursion
* @x: takes in a character
* @y:takes in a char
* Return: int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
{
return (1);
}
else
{
return (x * (_pow_recursion(x, y - 1)));
}
}
