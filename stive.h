#include <stdio.h>
#include <stdlib.h>
typedef char Data;
struct Elem
{
Data val;
struct Elem * next ;
};
typedef struct Elem Node ;
Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
void afisare_stiva(Node*top);
