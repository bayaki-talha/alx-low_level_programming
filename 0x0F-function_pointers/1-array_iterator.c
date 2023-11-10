#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array elements on a new line
 * @array: array
 * @size: size of elements to print
 * @action: pointer to print
 * Return: void
*/
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULl)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
