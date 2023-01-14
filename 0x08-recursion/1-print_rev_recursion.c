<<<<<<< HEAD
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
=======
#include "main.h"                                                                                                                       
                                                                                                                                        
/**                                                                                                                                     
 * _print_rev_recursion - Prints a string in reverse.                                                                                   
 * @s: The string to be printed.                                                                                                        
 */                                                                                                                                     
void _print_rev_recursion(char *s)                                                                                                      
{                                                                                                                                       
        if (*s)                                                                                                                         
        {                                                                                                                               
                _print_rev_recursion(s + 1);                                                                                            
                _putchar(*s);                                                                                                           
        }                                                                                                                               
>>>>>>> 62ceff400c155fcdd2da53460e6d75667d7f2871
}
