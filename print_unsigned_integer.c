#include "main.h"

/**
 * print_unsigned_integer - prints unsigend integer
 * @ptr: the pointer of type va_list
 *
 * Return: char pointer to the buffer.
 */
char *print_unsigned_integer(va_list ptr)
{
	int i, count = 0;
	unsigned int num, tmp;
	char *un_integer;

	num = va_arg(ptr, unsigned int);
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 10;
		count++;
	}
	un_integer = (char *)malloc(sizeof(char) *(count + 1));
	if (un_integer == NULL)
		return (NULL);
	for (i = (count - 1); i >= 0; i--)
	{
		un_integer[i] = (num % 10) + '0';
		num = num / 10;
	}
	un_integer[count] = '\0';
	return (un_integer);
}
