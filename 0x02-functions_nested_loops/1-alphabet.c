#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase followed by a newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}

/**
 * main - calling the function to execute
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
