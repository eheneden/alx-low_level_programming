#include <stdio.h>

/**
 * main - a program that prints all single digit base followed by a new line
 *
 * Return: Always (0) success
 */

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
