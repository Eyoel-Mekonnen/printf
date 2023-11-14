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

	num = va_arg(ptr, int);
	if (num < 0)
	{
		num = -num;
		checker++;
	}
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 10;
		count++;
	}
	if (checker > 0)
	{
		count = count + 1;
	}
		integer = (char *)malloc(sizeof(char) * (count + 1));
	if (integer == NULL)
		return (NULL);
	for (i = (count - 1); i >= 0; i--)
	{
		integer[i] = (num % 10) + '0';
		num = num / 10;
		if (i - 1 == 0 && checker > 0)
		{
			integer[0] = '-';
			break;
		}
	
	}
	integer[count] = '\0';
	return (integer);
}