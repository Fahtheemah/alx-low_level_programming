#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */

int main(void)
{
	char C;

	C = 'a';
	while (C <= 'z')
	{
		if (C != 'q' && != 'e')
		{
			putchar(C);
		}
		C++;
	}
	putchar('\n');
	return (0);
}
