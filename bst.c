// binary search tree

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node * right;
} node;

node * tree;

//functions
void create_tree(node *);
node * insertElement(node *, int);
void preorderTraversal(node *);
void inorderTraversal(node *);
void postorderTraversal(node *);
node * findSmallestElement(node *);
node * findLargestElement(node *);
node * deleteElement(node *, int);
void mirrorImage(node *);
int totalNodes(node *);
int totalInternalNodes(node *);
int totalExternalNodes(node *);
int height(node *);
void deleteTree(node *);

int main(){
    int options, val;
    node *ptr;
    create_tree(tree);
    do{
        printf("1. Insert Element\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Smallest element\n");
        printf("6. Largest element\n");
        printf("7. Delete an element\n");
        printf("8. Total no. of nodes\n");
        printf("9. Total External nodes\n");
        printf("10. Total Internal nodes\n");
        printf("11. Height of tree\n");
        printf("12. Mirror image of tree\n");
        printf("13. Delete the tree\n");
        printf("14. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &options);
        switch (options){
            case 1:
                printf("\nEnter the value of the node: ");
                scanf("%d", &val);
                tree = insertElement(tree, val);
                break;
            case 2:
                printf("Preorder Traversal : \n");
                preorderTraversal(tree);
                break;
            case 3:
                printf("Inorder Traversal : \n");
                inorderTraversal(tree);
                break;
            case 4:
                printf("Postorder Traversal : \n");
                postorderTraversal(tree);
                break;
            case 5:
                ptr = findSmallestElement(tree);
                printf("Smallest element is : %d\n", ptr->data);
                break;
            case 6:
                ptr = findLargestElement(tree);
                printf("Largest element is : %d\n", ptr->data);
                break;
            case 7:
                printf("Enter the value to be deleted\n");
                scanf("%d", &val);
                tree = deleteElement(tree, val);
                break;
            case 8:
                printf("Total nodes: %d\n", totalNodes(tree));
                break;
            case 9:
                printf("Total External nodes: %d\n", totalExternalNodes(tree));
                break;
            case 10:
                printf("Total Internal nodes: %d\n", totalInternalNodes(tree));
                break;
            case 11:
                printf("Height of tree : %d\n", height(tree));
                break;
            case 12:
                mirrorImage(tree);
                break;
            case 13:
                deleteTree(tree);
                break;
            case 14:
                break;
            default:
                break;
        }
    } while (options != 14);
    return 0;
}

//functions implementations

void create_tree(node * tree){
    tree = NULL;
}

node * insertElement(node * pNode, int val){
    node * ptr, *nodeptr, *parentptr;
    ptr = (node *) malloc(sizeof(node));
    ptr ->data = val;
    ptr->left = NULL;
    ptr->right = NULL;

    if(pNode == NULL){
        pNode = ptr;
        pNode->right = NULL;
        pNode->left = NULL;
    } else{
        parentptr = NULL;
        nodeptr = pNode;
        while (nodeptr != NULL){
            parentptr = nodeptr;
            if(val < nodeptr->data){
                nodeptr = nodeptr->left;
            } else {
                nodeptr = nodeptr->right;
            }
        }
        if(val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;

    }
    return pNode;
}

void preorderTraversal(node * pNode){
    if(pNode != NULL){
        printf("%d ", pNode->data);
        preorderTraversal(pNode->left);
        preorderTraversal(pNode->right);
    }
}
void inorderTraversal(node * pNode){
    if(pNode != NULL){
        inorderTraversal(pNode->left);
        printf("%d ", pNode->data);
        inorderTraversal(pNode->right);
    }
}

void postorderTraversal(node * pNode){
    if(pNode != NULL){
        postorderTraversal(pNode->left);
        postorderTraversal(pNode->right);
        printf("%d ", pNode->data);
    }
}

node* findSmallestElement(node * pNode){
    if(pNode == NULL || pNode ->left == NULL)
        return tree;
    else
        return findSmallestElement(tree->left);
}
node * findLargestElement(node * pNode){
    if(pNode == NULL || pNode->right == NULL)
        return tree;
    else
        return findLargestElement(tree->right);
}

node * deleteElement(node * root, int key) {
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->data)
        root->left = deleteElement(root->left, key);

        // If the key to be deleted is greater than the root's key,
        // then it lies in right subtree
    else if (key > root->data)
        root->right = deleteElement(root->right, key);

        // if key is same as root's key, then This is the node
        // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct node *temp = findSmallestElement(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteElement(root->right, temp->data);
    }
    return root;
}
int totalNodes(node * root){
    if(root == NULL)
        return 0;
    else
        return totalNodes(root->left) + totalNodes(root->right) + 1;
}
int totalExternalNodes(node *root){
    if(root == NULL)
        return 0;
    else if(root->left == NULL && root->right == NULL)
        return 1;
    else
        return totalExternalNodes(root->left) + totalExternalNodes(root->right);
}
int totalInternalNodes(node * root){
    if(root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    else
        return totalInternalNodes(root->left) + totalInternalNodes(root->right);
}
int height(node * root){
    int left, right;
    if(root == NULL)
        return 0;
    else{
        left = height(root->left);
        right = height(root->right);
        if(left > right)
            return left + 1;
        else
            return right + 1;
    }
}
void mirror(node* root){
    if (root==NULL)
        return;
    else{
        node* temp;

        /* do the subtrees */
        mirror(root->left);
        mirror(root->right);

        /* swap the pointers in this node */
        temp        = root->left;
        root->left  = root->right;
        root->right = temp;
    }
}
void deleteTree(node* root){
    if(root != NULL){
        deleteTree(root->left);
        deleteTree(root->right);
        free(root);
    }
}

