#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - frees a linked list
  * @head: head of the linked list
  * Description: frees a linked list
  * Return: returns nothing
  */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
