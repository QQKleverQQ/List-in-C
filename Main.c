#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "List.h"

void print_menu() {
    printf("\n------------------Klever------------------\n");
    printf("1. Printing a list\n");
    printf("2. Add an element to the beginning\n");
    printf("3. Delete the first element\n");
    printf("4. Find the last element\n");
    printf("5. Find an element by value\n");
    printf("6. Exit\n");
    printf("------------------Out-Put------------------\n");
}

void free_list(Node_p list) {
    while (list != NULL) {
        Node_p temp = list;
        list = list->next;
        free(temp);
    }
}
int main() {
    Node_p list = list_init();
    int choice, value;

    while (1) {
        print_menu();
        printf("\nSelect an option: ");
        if (scanf("%d", &choice) != 1) {
            printf("ERROR|Check input!\n");
            while (getchar() != '\n'); 
            continue;
        }
        switch (choice) {
        case 1:
            printf("List: ");
            list_print(list);
            break;
        case 2:
            printf("Enter value: ");
            if (scanf("%d", &value) != 1) {
                printf("ERROR|Invalid input!\n");
                while (getchar() != '\n'); 
                continue;
            }
            list = list_add_first(list, value);
            break;
        case 3:
            list_remove(&list);
            break;
        case 4: {
            Node_p last = list_last(list);
            if (last) {
                printf("Last element: %d\n", last->value);
            }
            else {
                printf("ERROR|List is empty!\n");
            }
            break;
        }
        case 5:
            printf("Enter a value to search for: ");
            if (scanf("%d", &value) != 1) {
                printf("ERROR|Invalid input!\n");
                while (getchar() != '\n');
                continue;
            }
            Node_p found = list_find(list, value);
            if (found) {
                printf("Element found: %d\n", found->value);
            }
            else {
                printf("ERROR|Element not found!\n");
            }
            break;
        case 6:
            printf("Exiting program...\n");
            free_list(list);
            exit(0);
        default:
            printf("ERROR|Invalid option!\n");
        }
    }
    return 0;
}