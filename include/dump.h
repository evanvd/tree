#include <stdio.h>
#include "tree.h"


#define __Dump__(node_t, filename) GraphDump(node_t, filename, __FILE__, __LINE__);

const size_t capacity = 10;


void GraphDump(node_t* node, const char* filename, const char* file, int line);
void NodePrint(node_t* node, const char* file, int line);
void WriteToDot(node_t* node, FILE* log_file);
void CallCommand(size_t count_dump);
void DumpToHtml(node_t* node, size_t count_dump, const char* file, int line);
void PrintNodeToDot(node_t* node, FILE* log_file);