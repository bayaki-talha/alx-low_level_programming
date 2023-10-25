#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @n: function parameter
  *
  * Return: Always 0.
  */
void _puts_recursion(char *n)
{
	if (*n)
	{
	_putchar(*n);
	_puts_recursion(n + 1);
	}
	else
	_putchar('\n');
}

