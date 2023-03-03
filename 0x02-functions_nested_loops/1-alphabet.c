#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 *
 * @c: The character to write
 *
 * Return: On success, the number of characters written is returned.
 *         On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}
