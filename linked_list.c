// linked list


#include <stdlib.h>
#include <stdio.h>

typedef struct node{
    int info;
    struct node * next;
} node;

node * insert_beg(node * head, int val){
    node * q = (node *) malloc(sizeof(node));
    q->info = val;
    q->next = head;
    return q;
}

node * insert_end(node * head, int val){
    node * p = head;
    if(p == NULL){
        return insert_beg(head, val);
    }
    else{
        while(p->next != NULL){
            p = p->next;
        }
        node * q = (node *) malloc(sizeof(node));
        q->info = val;
        p->next = q;
        q->next = NULL;
        return head;
    }
}

node * insert_after(node * head, int data, int val){
    if(head == NULL){
        printf("List is empty.\n");
        return head;
    }
    else{
        node * p = head;
        while(p->next != NULL || p->info != data){
            p = p->next;
        }
        if(p->info == data){
            node * q = (node *) malloc(sizeof(node));
            q->next = p->next;
            q->info = val;
            p->next = q;
            return head;
        }
        else{
            printf("No node with given data found.\n");
            return head;
        }
    }
}

node * delete_beg(node * head){
    node * p = head;
    if(p == NULL){
        printf("List is empty. Can't delete.\n");
        return NULL;
    } else{
        node * q = p->next;
        free(p);
        return q;
    }
}

node * delete_end(node * head){
    node * p = head;
    node * q = p;
    if(p == NULL){
        printf("List is empty. Can't delete.\n");
        return NULL;
    } else{
        while (p->next != NULL){
            q = p;
            p = p->next;
        }
        q->next = NULL;
        free(p);
        return head;
    }
}

void display(node * head){
    if(head == NULL){
        printf("List is empty!\n");
        return;
    }
    else{
        node * p = head;
        while (p != NULL){
            printf("%d ", p->info);
            p = p->next;
        }
    }
}

node * sort_ll(node * head){
    node * ptr1 = head;
    if(ptr1 == NULL){
        printf("List is empty.\n");
        return head;
    }
    else{
        node *ptr2;
        int temp;
        ptr1  = head;
        while (ptr1 ->next != NULL){
            ptr2 = ptr1 ->next;
            while (ptr2 != NULL){
                if(ptr1 ->info > ptr2 ->info){
                    temp = ptr1 ->info;
                    ptr1 ->info = ptr2 ->info;
                    ptr2 ->info = temp;
                }
                ptr2 = ptr2 ->next;
            }
            ptr1 = ptr1 ->next;
        }
    }
    return head;
}











