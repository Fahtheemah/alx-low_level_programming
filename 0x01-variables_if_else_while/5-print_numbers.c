#include <stdio.h>
/**
 * main - A program that prints numbers of base ten
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char base_ten = '0';

	while (base_ten <= '9')
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}