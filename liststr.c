#include "shell.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: ponter list
 * @str: new string 
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while(str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	new->len = len;

	new->next = (*head);

	(*head) = new;

	return (*head);
}

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len = 0;

	while(str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
			return(NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if(*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}

/**
 * print_list_str - prints only the str element 
 * @h: first node
 *
 * Return: size 
 */
size_t print_list_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * *delete_nodeint_at_index - delete element
 * @head: ponter list
 * @idx: index
 *
 * Return: new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
	}

	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
