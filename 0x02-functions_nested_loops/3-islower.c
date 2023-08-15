#include <stdio.h>
#include "main.h"

/**
 *  _islower - checks for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase character or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * main - Entry point
 * Description: Tests the _islower function and prints the results
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = _islower('H');
	_putchar(result + '0');
	result = _islower('o');
	_putchar(result + '0');
	result = _islower(108);
	_putchar(result + '0');
	_putchar('\n');
	return (0);
}
