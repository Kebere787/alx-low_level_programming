<<<<<<< HEAD
#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

=======
#include "holberton.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
int factorial(int n)
{
	if (n < 0)
		return (-1);
<<<<<<< HEAD
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
=======
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
}
