#include <unistd.h>

/**
 * _putchar - prints a character to the stdout
 * @c: the character
 * Return: 0 if no error or 1 if error
 */

int _putchar(char ch)
{
	static int contador;
	static char buffer[1024];

	if (ch == -1)
	{
		contador = 0;
		return (0);
	}
	if (ch == -2 || contador == 1024)
	{
		write(1, buffer, contador);
		contador = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[contador] = ch;
		contador++;
		return (1);
	}
	return (0);
}
