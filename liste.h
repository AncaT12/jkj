#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
typedef int Data;
typedef struct Node{
	Data val;
    struct Node *next;
}Node;
void addAtBeginning(Node **head, Data v);
void addAtEnd(Node** head, Data v);
void display(Node *head);
void modify(struct Node *head, int k, Data newVal);


#endif // LISTE_H_INCLUDED
