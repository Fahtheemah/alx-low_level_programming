#include <stdio.h>
/**
 * main - A program that prints alphabets in reverse mode
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
