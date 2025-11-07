#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "dump.h"



int main()
{
    node_t* root = CreateNode(10);
    
    node_t* node1 = CreateNode(5);
    node_t* node2 = CreateNode(3);
    node_t* node3 = CreateNode(7);
    node_t* node4 = CreateNode(20);
    
    root->left = node1;
    root->right = node4;
    
    node1->left = node2;
    node1->right = node3;

    InsertNode(root, 6);
    __Dump__(root, "log/graphviz_file.dot");
    
    DeleteNode(root);
}