#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabets in freverse
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar (n);
		n--;
	}
	putchar('\n');
	return (0);
}
