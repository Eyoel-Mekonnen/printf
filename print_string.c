#include "main.h"
/**
 * print_string - prints string
 * @ptr: pointer to va_list
 *
 * Return: address of the string stored
 */
char *print_string(va_list ptr)
{
	char *str;
	str = va_arg(ptr, char *);
	return (str);
}
