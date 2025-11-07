#include <stdio.h>
#include "tree.h"
#include "dump.h"



int main()
{
    node_t node2 =
    {
        .data = 3,
        .right = NULL,
        .left =  NULL 
    };



    node_t node3 =
    {
        .data = 7,
        .right = NULL,
        .left = NULL
    };

    node_t node1 =
    {
        .data = 5,
        .right = &node3,
        .left =  &node2 
    };

    node_t node4 =
    {
        .data = 20,
        .right = NULL,
        .left = NULL
    };

    node_t root =
    {
        .data = 10,
        .right = &node4,
        .left = &node1
    };

    PrintNode(&root);

    //(&root, 6);
    __Dump__(&root, "log/graphviz_file.dot");
    PrintNode(&root);
}