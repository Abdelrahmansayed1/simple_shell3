#include "shell.h"

/**
 * list_len - print list length
 *
 * @h: list
 *
 * Return: length of list
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

/**
 * print_list - print list items
 *
 * @h: list
 *
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}

/**
 * get_nodeint_at_index - get element at specific index
 * @head: ponter list
 * @index: int
 *
 * Return: element at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;


	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	if (head)
		return (head);
	else
		return (NULL);
}

/**
 * node_starts_with - returns node
 * @node: head
 * @prefix: string to match
 * @c: the next character
 *
 * Return: match node or null
 */

list_t *node_starts_with(list_t *node, char prefix, char c)
{
  char *p = NULL;

  while (node)
    {
      p = starts_with(node->str, prefix);
      if (p && ((c == -1) | (p == c))
        return (node);
      npde = node->next;
    }
  return (NULL);
}

/**
 * list_to_strings - returns an array of strings 
 * @head: pointer to first node
 * Return: array of strings
 */

char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head) 
  size_t j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
  
	strs = malloc(sizeof(char *) * (i + 1));
  
	if (!strs)
		return (NULL);
  
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
    
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
      
			free(strs);
      
			return (NULL);
		}

		str = _strcpy(str, node->str);
    
		strs[i] = str;
	}
  
	strs[i] = NULL;
  
	return (strs);
}

