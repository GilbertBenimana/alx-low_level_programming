#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a linked list
  * @h: head of the linked list
  * Description: prints all the elements of a linked list
  * Return: returns the number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
int c = 0;
if (h != NULL)
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
}
return (c);
}
