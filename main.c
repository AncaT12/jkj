#include "liste.h"

int main()
{
    struct Node *head = NULL;

    addAtEnd(&head, 1);
    addAtEnd(&head, 2);
    addAtEnd(&head, 3);
    display(head);

    addAtBeginning(&head, 0);
    display(head);
    modify(head,2,4);
    display(head);


    return 0;
}
