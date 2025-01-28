#ifndef LIST_H
#define LIST_H


typedef struct Node {
    int value;
    struct Node* next;
} Node, * Node_p;

void list_print(Node_p list);
void list_remove(Node_p* list);
Node_p list_init();
Node_p list_add_first(Node_p list, int value);
Node_p list_last(Node_p list);
Node_p list_find(Node_p list, int value);
#endif