//this is circular queue

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef struct Node{
    int a[MAX], f, r;
} node;

void enqueue(node * q, int val){
    if( (q->f == q->r + 1) || (q->f == 0 && q->r == MAX-1))
    {
        printf("Queue is full.\n");
        return;
    }
    q->a[(++q->r)%MAX] = val;
}
int dequeue(node * q){
    if((q->r+1)%MAX == q->f){
        printf("Queue is empty\n");
        return NULL;
    }
    return q->a[(q->f++)%MAX];
}
















