#include "main.h"
/**
 * _strlen - returns the length of the a string
 *
 * @s: string paramater input
 *
 * Return: return count
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != 0)
	{
		count += 1;
		i++;
	}
	return (count);
}
