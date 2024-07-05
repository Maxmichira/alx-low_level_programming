#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	/* Find the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the null terminator */
	*ptr = '\0';

	return (dest);
}

