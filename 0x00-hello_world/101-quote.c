#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: A C program that prints a line to the standard error
 * Return 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
return (1);
}