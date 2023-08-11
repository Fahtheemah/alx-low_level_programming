#include <stdio.h>
/**
 * main - A program that prints single digit numbers of base ten
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabets = '0';

	while (alphabets <= '9')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
