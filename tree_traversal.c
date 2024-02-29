#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d =>", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if (root == NULL)
        return;
    printf("%d =>", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d =>", root->data);
}

struct node *createNode(value){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insertLeft(struct node *root, int num)
{
    root->left = createNode(num);
    return root->left;
}

struct node *insertRight(struct node *root, int num)
{
    root->right = createNode(num);
    return root->right;
}

int main(void)
{
    struct node *root = createNode(1);
    insertLeft(root, 8);
    insertRight(root, 10);

    insertLeft(root->left, 15);
    insertRight(root->left, 20);

    printf("Inorder traversal\n");
    inorder(root);

    printf("\nPreorder traversal\n");
    preorder(root);

    printf("\nPostorder traversal\n");
    postorder(root);

    return (0);
}

