#include "main.h"

/**
 * printc - prints a char.
 * @pa: format of char.
 * @format: format
 * Return: number char for printf.
 */
int printc(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}
