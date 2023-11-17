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
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 2;
		count++;
	}
	if (num == 0)
	{
		count = 2;
	}
	binary = (char *)malloc(sizeof(char) * (count + 1));
	if (binary == NULL)
		return (NULL);
	if (num != 0)
		for (i = (count - 1); i >= 0; i--)
		{
			binary[i] = (num % 2) + '0';
			num = num / 2;
		}
	else if (num == 0)
	{
		binary[0] = 0 + '0';
		binary[1] = 0 + '0';
	}
	binary[count] = '\0';
	return (binary);
}
