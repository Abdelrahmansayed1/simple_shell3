#include "shell.h"

/**
 * *_memset - function fills the first n bytes of e memory area pointed to by s with the constant byte
 *
 * @s: represents string 1
 *
 * @b: represents string 2
 *
 * @n: which index the string will concatenated
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * ffree - free astring of strings
 * @pp: string of strings
*/

void ffree(char **pp)
{
  	char **a = pp;
  
  	if (!pp)
    		return;
  	while (*pp)
    		free (*pp++);
  	free (a);
}

/**
 * _realloc - function fills the first n bytes of e memory area pointed to by s with the constant byte
 *
 * @ptr: represents string 1
 *
 * @old_size: represents string 2
 *
 * @new_size: which index the string will concatenated
 *
 * Return: pointer s
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *p;

  if (!ptr)
    return (malloc(new_size));
  if (! new_size)
    return (free(ptr), NULL);
  if (new_size == old_size)
    return (ptr);

  p = malloc(new_size);
  if (!p)
    return (NULL);

  old_size = old_size < new_size ? old_size : new_size;

  while (old_size--)
    p[old_size] = ((char *) ptr)[old_size];
  free (ptr);
  return (p);
}
