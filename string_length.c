#include "main.h"
/**
 * string_length - prints the length of a string
 * @tmp: the string passed
 *
 * Return: count of length of string
 */
int string_length(char *tmp)
{
	int len = 0;
	
	while (tmp[len] != '\0')
		len++;
	return (len);
}
