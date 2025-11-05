#include  <stdio.h>
#include <assert.h>
#include "tree.h"

void PrintNode(node_t* node)
{
    printf("(");
    
    if(node->left)
    {
        PrintNode(node->left);
    }
    printf("%d", node->data);

    if(node->right)
    {
        PrintNode(node->right);
    }
    printf(")");
}

void InsertNode(node_t* node, int element)
{
    

    if(element <= node->data)
    {
        if(node->left == NULL)
        {
            node_t inserted_node =
            {
                node->data = element
            };
            node->left = &inserted_node;
        }
        assert(node->left != NULL);
        InsertNode(node->left, element);
    }

    if(element > node->data)
    {
        if(node->right == NULL)
        {
            node_t inserted_node =
            {
                
                node->data = element
            };
            node->right = &inserted_node;
        }
        InsertNode(node->right, element);
    }
}

void DeleteNode(node_t* node)
{
    
    if(node->left)
    {
        DeleteNode(node->left);
    }

    if (node->right)
    {
        DeleteNode(node->left);
    }

    node = NULL;
}