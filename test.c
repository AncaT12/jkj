#include "liste.h"
int main()
{
    struct Node *head = NULL;

    addAtEnd(&head, 1);
    addAtEnd(&head, 2);
    addAtEnd(&head, 3);
    printf("Afisare dupa adaugarea la sfarsit: ");
    display(head);

    addAtBeginning(&head, 0);
    printf("Afisare dupa adaugarea la inceput: ");
    display(head);
    modify(head,2,5);
    display(head);

    return 0;
}
