#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}

	dest[n + i] = '\0';

	return dest;
}

