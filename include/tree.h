#include <stdio.h>


struct node_t 
{
    int data;
    node_t* right;
    node_t* left;
};

void PrintNode(node_t* node);
void InsertNode(node_t* node, int element);
node_t* CreateNode(int data);
void DeleteNode(node_t* node);