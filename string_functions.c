* _strlen - function get length of string
 *
 * @s: string
 *
 * Return: always concatanted string (success)
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	
	while (*s++)
		i++;

	return (i);
}

* _strcmp - function that compares two strings
 *
 * @s1: represents string 1
 *
 * @s2: represents string 2
 *
 * Return: always concatanted string (success)
*/
  
int _strcmp(char *s1, *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++; 
	}
	if (*s1 == *s2)	
		return (0);
	else
		return (*s1 , *s2 ? -1 : 1); 
}

* *starts_wit - function get the needle
 *
 * @haystack: represents string 1
 *
 * @needle: represents string 2
 *
 * Return: always concatanted string (success)
*/

 
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
		return ((char *)haystack);
}

* _strcat - function that concatenate two string.
 *
 * @dest: represents string 1
 *
 * @src: represents string 2
 *
 * Return: always concatanted string (success)
*/

char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;

	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
