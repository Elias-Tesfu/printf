#include "main.h"

/**
 * printpercent - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int printpercent(char *format, va_list args)
{
	(void)format;
	(void)args;
	_putchar('%');
	return (1);
}
