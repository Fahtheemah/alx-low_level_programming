#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	unsigned long int a, b, next;

	a = 0;
	b = 1;
	next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", a);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
