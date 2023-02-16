#include <stdio.h>
/**
 * main -entry point
 *
 * Return: always 0 on success
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("Size of a char is: %zu byte(s)\n", sizeof(c));
	printf("Size of an int is: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(d));
	printf("Size of a float is: %zu byte(s)\n", sizeof(f));

	return (0);
}
