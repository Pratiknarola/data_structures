#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct Node {
    int a[MAX];
    int top;
} node;

void push(node * s, int val){
    if(s->top == MAX) {
        printf("Stack overflow\n");
        return;
    }
    s->a[++(s->top)] = val;
}

int pop(node *s){
    if(s->top == -1){
        printf("Stack underflow.\n");
        return;
    }
    return s->a[s->top--];
}

int peek(node *s){
    return s->a[s->top];
}

void display(node *s){
    for(int i = 0; i <= s->top; i++){
        printf("%d ", s->a[i]);
    }
}

int main() {

    node s;
    s.top = -1;

    int val, choice = 0;
    while(choice != 5){
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your option: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\n Enter the number to be pushed: ");
                scanf("%d", &val);
                push(&s, val);
                break;
            case 2:
                printf("\n%d element was popped", pop(&s));
                break;
            case 3:
                printf("\n%d is on the top", peek(&s));
                break;
            case 4:
                display(&s);
                break;
            case 5:
                break;
            default:
                break;
        }

    }



    return 0;
}