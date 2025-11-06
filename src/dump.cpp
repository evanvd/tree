#include <stdio.h>
#include <string.h>
#include "dump.h"


void GraphDump(node_t* node, const char* filename, const char* file, int line)
{
    static size_t count_dump = 1;    
    
    FILE* log_file =  fopen(filename, "w");
    WriteToDot(node, log_file);
    fclose(log_file);
    
    CallCommand(count_dump);
    DumpToHtml(node, count_dump, file, line);
    count_dump++;
}

void WriteToDot(node_t* node, FILE* log_file)
{
    fprintf(log_file, "digraph {\n");

    fprintf(log_file, "");
    fprintf(log_file, "");
    fprintf(log_file, "");

    fprintf(log_file, "");

    for (size_t index = 1; index < capacity; index++)
    {
        fprintf(log_file, "");
    }

    fprintf(log_file, "node1");
    for (size_t index = 1; index < capacity; index++)
    {
        fprintf(log_file, "->node%lu", index);
    }
    
    fprintf(log_file, "\n");
    fprintf(log_file, "[style=invis, weight=100];\n edge [color=green, penwidth=1, arrowhead = normal];\n");

    fprintf(log_file, "node1");

    fprintf(log_file, "}");
}

void CallCommand(size_t count_dump)
{
    char cmd[60] = {};
    snprintf(cmd, sizeof(cmd), "%s%lu.%s", "dot -Tpng log/graphviz_file.txt -o log/graph", count_dump, "png");
    printf("%s\n",cmd);
    system(cmd);
}

void DumpToHtml(node_t* node, size_t count_dump, const char* file, int line)
{
    FILE* dump_file = fopen("dump.html", "w");
    char dump_str[120] = {};
    snprintf(dump_str, sizeof(dump_str), "<h1>DUMP FROM %s:%d\n", file, line);
    fprintf(dump_file, "%s",dump_str);
    

    char img_name[40] = {};
    snprintf(img_name, sizeof(img_name), "<img src = \"log/graph%lu.png\"/>\n",  count_dump);
    fprintf(dump_file, "%s", img_name);
}