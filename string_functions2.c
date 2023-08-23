#include "shell.h"

/**
 * _strcpy - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * Return: always concatanted string (success)
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * *_strdup - Write a function that returns a pointer to a newly
 *
 * @str: string
 *
 * Return: string of chars
*/

char *_strdup(const char *str)
{
	int length = strlen(str);
	char *s = (char *)malloc(length * sizeof(*str) + 1);
	int i;

	if (s == 0)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: represents string s
 *
 * Return: always 0 (success)
*/

void _puts(char *str)
{
	printf("%s", str);
	printf("\n");
}

/**
 * _putchar - print char
 *
 * @c: char
 *
 * Return: 0 (success)
*/

int _putchar(char c)
{
  static int i = 0;
  static char buf[WRITE_BUF_SIZE];

  if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
  {
    write(1, buf, i);
    i = 0;
  }
  if ( c != BUF_FLUSH)
    buf[i++] = c;
  return (i);
}
