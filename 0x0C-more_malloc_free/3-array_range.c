#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
