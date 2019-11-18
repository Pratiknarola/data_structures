//heap

#include <stdlib.h>
#include <stdio.h>

struct Heap{
    int * arr;
    int count;
    int capacity;
    int heap_type;
};

void heapify_bottom_up(heap *pHeap, int count);

typedef struct Heap heap;

heap * createheap(int cap, int heap_type){
    heap *h = (heap*) malloc(sizeof(heap));
    if(h == NULL){
        printf("Memory error\n");
        return ;
    }
    h->heap_type = heap_type;
    h->count = 0;
    h->capacity = cap;
    h->arr = (int*) malloc(cap* sizeof(int));
    return h;
}

void insert(heap *h, int key){
    if(h->count < h->capacity){
        h->arr[h->count] = key;
        heapify_bottom_up(h, h->count);
        h->count++;
    }
}

void heapify_bottom_up(heap * h, int index) {
    int temp;
    int parent_node = (index-1)/2;

    if(h->arr[parent_node] > h->arr[index]){
        temp = h->arr[parent_node];
        h->arr[parent_node] = h->arr[index];
        h->arr[index] = temp;
        heapify_bottom_up(h, parent_node);
    }
}
void heapify_top_bottom(heap *h, int parent_node){
    int left = parent_node*2 + 1;
    int right = parent_node*2 + 2;
    int min;
    int temp;

    if(left >= h->count || left < 0)
        left = -1;
    if(right >= h->count || right < 0)
        right = -1;

    if(left != -1 && h->arr[left] < h->arr[parent_node])
        min = left;
    else
        min = parent_node;

    if(right != -1 && h->arr[right] < h->arr[min])
        min = right;

    if(min != parent_node){
        temp = h->arr[min];
        h->arr[min] = h->arr[parent_node];
        h->arr[parent_node] = temp;

        heapify_top_bottom(h, min);

    }

}























