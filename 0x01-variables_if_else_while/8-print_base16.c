#include<stdio.h>

/**
 * main -entry point
 *
 * Return: always 0
*/

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; ch++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
