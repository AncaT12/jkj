#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

typedef int Data;



void addAtBeginning(Node **head, Data v)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}
void modify(struct Node *head, int k, Data newVal)
{
    struct Node *current = head;
    int i = 0;

    while (current != NULL && i < k) {
        current = current->next;
        i++;
    }

    if (current != NULL) {
        current->val = newVal;
    }
}
