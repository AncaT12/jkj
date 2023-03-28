#include "stive.h"

int main()
{
   char c;
  Node * stackTop = NULL ;
  push (&stackTop ,'c');
  push (&stackTop ,'r');
  push (&stackTop ,'f');
  printf("Valoarea de la varful stivei: %c\n", top(stackTop));
    c = pop(&stackTop);
    printf("Elementul eliminat: %c\n", c);

    // Afisăm toate elementele rămase în stivă
    printf("Elementele rămase în stivă: ");
    while (!isEmpty(stackTop)) {
        printf("%c ", top(stackTop));
        pop(&stackTop);
    }

    // Eliberăm memoria alocată pentru stivă
  deleteStack(&stackTop);

  }
