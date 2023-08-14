#include "shell.h"

/**
 * _erratoi - converts a string to an integer
 * @s: the string
 * Return: 0 if no numbers in string
 */

int _erratoi(char *s)
{
  int i = 0;
  unsigned long int result = 0;

  if (*s = '+')
    s++;

  for (i = 0; s[i] != '/0'; i++)
    {
      result *= 10;
      result += (s[i] - '0');
      if (result > INT_MAX)
        return (-1);
    }
  return (result);
}

/**
 * print_error - prints an error message
 * @info: info
 * @estr: string
 * Return: 0 if no numbers in string
 */

void print_error(info_t *info, char *estr)
{
	_eputs(info->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(info->argv[0]);
	_eputs(": ");
	_eputs(estr);
}

/**
 * print_d - function prints a decimal 
 * @entry: the entru
 * @fd: the filedescriptor
 *
 * Return: number of characters printed
 */
int print_d(int entry, int fd)
{
	int (*__putchar)(char) = _putchar;
	int i, c = 0;
	unsigned int _abs_, current;

	if (fd == STDERR_FILENO)
		__putchar = _eputchar;
  
	if (input < 0)
	{
		_abs_ = -entry;
		__putchar('-');
		c++;
	}
	else
		_abs_ = entry;
  
	current = _abs_;
  
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			__putchar('0' + current / i);
			c++;
		}
		c %= i;
	}
  
	__putchar('0' + current);
	c++;

	return (c);
}

/**
 * convert_number - converter function
 * @num: number
 * @base: base
 * @flags: argument flags
 *
 * Return: string
 */

char *convert_number(long int num, int base, int flags)
{
  static char *array;
	static char buffer[50];
	char s = 0;
	char *ptr;
	unsigned long i = num;

  if (!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		i = -num;
		s = '-';
	}

  array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";

  ptr = &buffer[49];
  *ptr = '\0'
  while (i != 0)
    {
      *--ptr = array[i % base];
		  i /= base;
    }
  
  if (sign)
		*--ptr = sign;
	return (ptr);
}
