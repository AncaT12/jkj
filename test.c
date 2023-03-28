
#include "stive.h"
#include <limits.h>
Data top(Node *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
}
void push(Node**top, Data v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

Data pop(Node**top) {
	if (isEmpty(*top)) return INT_MIN;
	Node *temp=(*top);
	Data aux=temp->val;
	*top=(*top)->next;
	free(temp);
	return aux;
}

int isEmpty(Node*top){
	return top==NULL;
}

void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty(*top))
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}
void afisare_stiva(Node*top) {
    if(top == NULL) { // verificam daca stiva este goala
        printf("Stiva este goala.\n");
    } else {
        printf("Elementele stivei sunt: ");
        while(top != NULL) { // parcurgem stiva incepand de la varful acesteia
            printf("%d ", top->val); // afisam valoarea fiecarui nod
            top = top->next; // trecem la urmatorul nod
        }
        printf("\n");
    }
}


