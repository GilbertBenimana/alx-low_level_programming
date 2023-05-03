#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - function that reverses a listint_t
  * @head: listint_t
  * Description: function that reverses a listint_t
  * Return: returns listint_t
  */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;
if (head)
{
while (*head)
{
next = *head;
*head = (*head)->next;
next->next = prev;
prev = next;
}
*head = prev;
return (*head);
}
return (NULL);
}
