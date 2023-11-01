#include "main.h"
/**
 * sqrtRecursive - computes square root recursively
 * @n: given number
 * @m: comparison number
 * Return: 1 if not found sqrroot, else sqrroot
 **/
int sqrtRecursive(int n, int m)
{
if (n <= 0)
{
return (-1);
}
if (n * n == m)
{
return (n);
}
return (sqrtRecursive(n - 1, m));
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (sqrtRecursive(n / 2, n));
}
