#include "main.h"



/**
 * factorial - returns the factorial of anumber
 * @n: number to return the factorial from
 * Return: factorrial of n
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
