
#include "cozi.h"

int main() {
    Queue* q = createQueue();

        enQueue(q,1);
        enQueue(q,2);
        enQueue(q,3);


    printf("Queue elements: ");
    while (!isEmpty(q)) {
        printf("%d ", deQueue(q));
    }
    printf("\n");

    deleteQueue(q);

    return 0;
}

