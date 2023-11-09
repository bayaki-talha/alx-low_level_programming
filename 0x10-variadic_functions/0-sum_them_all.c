#include "variadic_function.h"

/**
 * sum_them_all - sum variable arguments
 * @n: the number of arguments
 * @...: integers to sum
 *
 * Return: interger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	for (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
