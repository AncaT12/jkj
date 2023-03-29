#include "stiva.h"

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


    printf("Elementele rămase în stivă: ");
    while (!isEmpty(stackTop)) {
        printf("%c ", top(stackTop));
        pop(&stackTop);
    }

  deleteStack(&stackTop);

  }

