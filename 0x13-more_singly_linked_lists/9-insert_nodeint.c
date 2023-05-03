#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a position
  * @head: listint_t
  * @idx: unsigned int
  * @n: int
  * Description: inserts a new node at a position
  * Return: returns listint_t
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_n, *iter;
unsigned int c = 1;
if (head)
{
new_n = malloc(sizeof(listint_t));
if (new_n == NULL)
return (NULL);
new_n->n = n;
if (idx > 0)
{
iter = *head;
while (iter)
{
if (c == idx)
{
new_n->next = iter->next;
iter->next = new_n;
return (new_n);
}
iter = iter->next;
c++;
}
if (idx > c)
return (NULL);
}
else
{
new_n->next = *head;
*head = new_n;
}
return (new_n);
}
return (NULL);
}
