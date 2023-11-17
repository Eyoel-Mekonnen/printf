#include "main.h"
/**
 * print_integer - prints integer as a string
 * @ptr: the pointer to va_list
 * 
 * Return: passes integer as string with address
 */
char *print_integer(va_list ptr)
{
	char *integer;
	int i, num, tmp, count = 0, checker = 0;
	unsigned int pos;

	num = va_arg(ptr, int);
	if (num < 0)
	{
		pos = (-1) * num;
		checker++;
	}		
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 10;
		count++;
	}
	if (checker > 0 || num == 0)
	{
		count = count + 1;
	}
		integer = (char *)malloc(sizeof(char) * (count + 1));
	if (integer == NULL)
		return (NULL);
	if (num > 0)
	{
		for (i = (count - 1); i >= 0; i--)
		{
			integer[i] = (num % 10) + '0';
			num = num / 10;
		}
		integer[count] = '\0';
	}
	else if (num == 0)
	{
		count = count + 1;
		printf("%d - count\n", count);
		integer[0] = 0 + '0';
		integer[1] = 0 + '0';
		integer[count] = '\0';
	}
	else if (num < 0)
	{
		for (i = (count - 1); i >= 0; i--)
		{
			if (i == 0)
			{
				integer[i] = '-';
				break;
			}
			integer[i] = (pos % 10) + '0';
			pos = pos / 10;
		}
		integer[count] = '\0';
	}
	return (integer);
}
