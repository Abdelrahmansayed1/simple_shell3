#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: address
 *
 * Return: 1 interactive 0 not
*/

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * _isalpha - check if c alphabet
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is alphabet otherwise `0` (success)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}

/**
 * is_delim - check if is delimiter
 *
 * @c: char
 *
 * Return: returns 1 if `c` is alphabet otherwise `0` (success)
*/

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _atoi - function that returns integer of string
 *
 * @s: represents string s
 *
 * Return: always integer if no number 0 (success)
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}
