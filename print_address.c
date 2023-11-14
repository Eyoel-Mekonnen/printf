#include "main.h"
char hexaaa(int num)
{
	char c;

	switch (num)
	{
		case 10:
			c = 'a';
			break;
		case 11:
			c = 'b';
			break;
		case 12:
			c = 'c';
			break;
		case 13:
			c = 'd';
			break;
		case 14:
			c = 'e';
			break;
		case 15:
			c = 'f';
			break;
		default:
			break;
	}
	return (c);
}
/**
 * print_address - prints the address of a variable
 * @ptr: pointer of type va_list
 *
 * Return: string address
 */
char *print_address(va_list ptr)
{
	char *str;
	void *c;
	int i, count = 0, len;
	long int num, tmp;

	c = va_arg(ptr, void *);
	num = (unsigned long int)c;
	tmp = num;
	while (tmp)
	{
		tmp = tmp / 16;
		count++;
	}
	str = (char *)malloc(sizeof(char) * (count + 3));
	printf("%d - count\n", count);
	len = count + 3;
	printf("%d - len\n", len);
	for (i = (len - 2); i >= 0; i--)
	{
		if (i == 0)
		{
			str[0] = 48;
			continue;
		}
		if (i == 1)
		{
			str[1] = 120;
			continue;
		}
		if (num % 16 >= 10)
		{
			str[i] = hexaaa(num % 16);
			num = num / 16;
		}
		else if (num % 16 < 10)
		{
			str[i] = (num % 16) + '0';
			num = num / 16;
		}
	}
	str[len - 1] = '\0';	
	return (str);
}
