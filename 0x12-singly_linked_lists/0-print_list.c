#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all elements of a list
  * @h: linked list
  * Description: prints all elements of a list
  * Return: returns number of nodes
  */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
