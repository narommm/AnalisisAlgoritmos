#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct node{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item){
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root){
    if (root != NULL){
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int key){
    if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}


struct node * minValueNode(struct node* node){
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node * maxValueNode(struct node* node){
    struct node* current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;
}

struct node *ancestro(struct node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->key > n1 && root->key > n2)
    {
        return ancestro(root->left, n1, n2);
    }

    if (root->key < n1 && root->key < n2)
    {
        return ancestro(root->right, n1, n2);
    }

    return root;
}

int NivelNodo(struct node *root, int k, int nivel)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->key == k)
    {
        return nivel;
    }

    int left = NivelNodo(root->left, k, nivel + 1);
    if (left == -1)
    {
        return NivelNodo(root->right, k, nivel + 1);
    }
    return left;
}

int distanciaNodo(node *root, int a, int b)
{
    struct node *ancestro2 = ancestro(root, a, b);
    int d1 = NivelNodo(ancestro2, a, 0);
    int d2 = NivelNodo(ancestro2, b, 0);

    return d1 + d2;
}

int main(){

    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 14);
    root = insert(root, 13);
    
    
    int n1 = 4, n2 = 13, n3 = 1, n4 = 7;
    struct node *n = ancestro(root, n1, n2);
    printf("El nodo ancestro de %d y %d es %d \n", n1, n2, n->key);
    
    cout << "Distancia entre el nodo " << n3 << " y el nodo " << n4 << " es " << distanciaNodo(root, n3, n4) << endl;
    return 0;
}