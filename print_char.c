#include "main.h"
/**
 * print_char - prints character
 * @ptr: ptr to a va_list
 *
 * Return: character
 */
char *print_char(va_list ptr)
{
	char c;
	char *str;
	c = va_arg(ptr, int);
	if (c == '\0')
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
