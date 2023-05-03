#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index -  function that returns the nth node
  * @head: listint_t
  * @index: unsigned int
  * Description: function that returns the nth node
  * Return: returns listint_t
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
if (head)
{
while (head)
{
if (c == index)
return (head);
head = head->next;
c++;
}
}
return (NULL);
}
