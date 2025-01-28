#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

Node_p list_init() {
    return NULL;
}
void list_print(Node_p list) {
    Node_p current = list;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

Node_p list_add_first(Node_p list, int value) {
    Node_p new_node = (Node_p)malloc(sizeof(Node));
    if (!new_node) {
        perror("ERROR | Check memory!");
        exit(EXIT_FAILURE);
    }
    new_node->value = value;
    new_node->next = list;
    return new_node;
}

void list_remove(Node_p* list) {
    if (*list == NULL) {
        printf("ERROR | Check list!.\n");
        return;
    }
    Node_p temp = *list;
    *list = (*list)->next;
    free(temp);
}
Node_p list_last(Node_p list) {
    if (list == NULL) {
        return NULL;
    }
    while (list->next != NULL) {
        list = list->next;
    }
    return list;
}

Node_p list_find(Node_p list, int value) {
    while (list != NULL) {
        if (list->value == value) {
            return list;
        }
        list = list->next;
    }
    return NULL;
}
