#include <stdio.h>

/**
 * main - program prints the lowercase in reverse, followed by a new line
 *
 * Return: Always (0) success
 */

int main(void)

{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');

	return (0);

}
