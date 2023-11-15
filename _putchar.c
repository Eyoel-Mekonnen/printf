#include "main.h"
/**
 * _putchar - prints character to stdout
 *
 *
 * Retrun: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
