#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check eandiness
 *
 * Return: 1 if little endian, 0 if big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *)&i;
	
	return (*s);
}
