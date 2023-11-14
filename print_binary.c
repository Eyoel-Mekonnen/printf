#include "main.h"
/**
 * print_binary - prints binary of a number
 * @ptr: the pointer by va_list
 *
 * Return: Adress of the char.
 */
char *print_binary(va_list ptr)
{
	int i, count = 0;
	unsigned int num, tmp;
	char *binary;

	num = va_arg(ptr, unsigned int);
	if (num)
		return (NULL);
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 2;
		count++;
	}
	binary = (char *)malloc(sizeof(char) * (count + 1));
	if (binary == NULL)
		return (NULL);
	for (i = (count - 1); i >= 0; i--)
	{
		binary[i] = (num % 2) + '0';
		num = num / 2;
	}
	binary[count] = '\0';
	return (binary);
}
