# List-in-C
A short use of List in C

# Linked List Implementation in C

This project implements a simple singly linked list in C with basic operations like adding, removing, printing, finding elements, and more. The implementation demonstrates key concepts of linked lists and memory management in C.

## Features

1. **Add element to the beginning of the list**  
2. **Delete the first element**  
3. **Print the list**  
4. **Find the last element in the list**  
5. **Find an element by value**  
6. **Exit the program**  

## File Structure

- **List.h**: Header file containing the definition of the `Node` structure and function prototypes.
- **List.c**: Implementation of the functions for linked list operations.
- **Main.c**: The main program that provides a menu-driven interface to interact with the linked list.

## Functions

- `Node_p list_init()`  
  Initializes the linked list. Returns `NULL` to represent an empty list.
  
- `void list_print(Node_p list)`  
  Prints the entire list, showing each element in the list in the form `value ->`.

- `Node_p list_add_first(Node_p list, int value)`  
  Adds a new node with the specified value to the beginning of the list. Returns the new head of the list.

- `void list_remove(Node_p* list)`  
  Removes the first element from the list.

- `Node_p list_last(Node_p list)`  
  Finds and returns the last element in the list.

- `Node_p list_find(Node_p list, int value)`  
  Searches for an element with the given value in the list and returns the node if found.

## Usage

1. Compile the program using a C compiler like `gcc`:
   ```bash
   gcc main.c List.c -o linked_list
