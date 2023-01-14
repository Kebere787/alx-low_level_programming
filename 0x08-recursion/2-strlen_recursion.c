<<<<<<< HEAD
#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s == '\0')
		return (0);

	n = 1 +  _strlen_recursion(s + 1);

	return (n);
=======
#include "holberton.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
}
