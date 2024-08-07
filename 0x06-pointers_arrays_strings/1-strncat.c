#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to concatenate
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return dest;
}

