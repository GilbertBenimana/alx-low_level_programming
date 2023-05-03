#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node
  * @head: listint_t
  * Description: deletes the head node
  * Return: return int
  */
int pop_listint(listint_t **head)
{
listint_t *new_h;
int n = 0;
if (*head != NULL)
{
new_h = (*head)->next;
n = (*head)->n;
free(*head);
*head = new_h;
}
return (n);
}
