#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "dump.h"



int main()
{
    tree_t tree = {};
    InitTree(&tree, 10);    
    node_t* node1 = CreateNode(5);
    node_t* node2 = CreateNode(3);
    node_t* node3 = CreateNode(7);
    node_t* node4 = CreateNode(20);
    
    tree.root->left = node1;
    tree.root->right = node4;
    
    node1->left = node2;
    node1->right = node3;

    DUMP_TREE(tree, "log/graphviz_file.dot");

    InsertNode(tree.root, 6);

    DUMP_TREE(tree, "log/graphviz_file.dot");
    // DeleteNode(node3);
    InsertNode(tree.root, 8);
    DUMP_TREE(tree, "log/graphviz_file.dot");

    InsertNode(tree.root, 18);
    DUMP_TREE(tree, "log/graphviz_file.dot");
    
    InsertNode(tree.root, 21);
    DUMP_TREE(tree, "log/graphviz_file.dot");
    
    InsertNode(tree.root, 17);
    InsertNode(tree.root, 19);
    DUMP_TREE(tree, "log/graphviz_file.dot");
    DeleteNode(tree.root);
}