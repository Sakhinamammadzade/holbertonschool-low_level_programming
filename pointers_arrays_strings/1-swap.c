#include "main.h"
/**
*swap_int - function swaps the values of two integers.
*@a:first param
*@b:second param
*Return: void
*/
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
