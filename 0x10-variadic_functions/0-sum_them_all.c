#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number ofarguments to be passed
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0
 * Otherwise - sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
