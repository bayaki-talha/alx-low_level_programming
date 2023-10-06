#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putcher(ch);
		ch++;
	}
	putcher('\n');

	return (0);
}
