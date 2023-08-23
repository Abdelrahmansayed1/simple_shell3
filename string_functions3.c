#include "shell.h"

/**
 * _strncpy - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * @i: which index the string will concatenated
 *
 * Return: always concatanted string (success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * _strncat - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * @i: which index the string will concatenated
 *
 * Return: always concatanted string (success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[ i ])
	{
		i++;
	}
	
	for (j = 0; j < n && src[ j ] != '\0'; j++)
	{
		dest[ i + j ] = src[ j ];
	}

	dest[ i + j ] = '\0';

	return (dest);
}

/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: pointer to string dest
 *
 * @c: character
 *
 * Return: pointer to string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
