<<<<<<< HEAD
#include "main.h"

/**
 * _pow_recursion - return the value of `x` raised to power of `y`
 * @x: number value
 * @y: number power
 * Return: x to power of y
 */

=======
#include "holberton.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: Number Integer
 * @y: Power
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
<<<<<<< HEAD
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

=======
	if (y == 0)
		return (1);
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
	return (x * _pow_recursion(x, y - 1));
}
