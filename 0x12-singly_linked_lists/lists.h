#ifndef LISTS_H
#define LISTS_H

/****************** Std library *************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/***************** Structure ****************************************/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/******************** Write function *******************************/
int _putchar(char c);
int _puts(char *str);

/************************ printing a linked list ******************/
size_t print_list(const list_t *h);

#endif
