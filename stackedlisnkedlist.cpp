#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;
     Node() {
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    Node* top; // Pointer to the top node of the stack
    public:
    Stack() {
        top = NULL; // Initialize the stack with a null top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    void push(int value) {
        Node* newNode = new Node(); // Allocate memory for the new node
        newNode->data = value; // Assign value
        newNode->next = top; // Set the next pointer of the new node to the current top node
        top = newNode; // Update the top pointer to the new node
        cout << "Push value: " << value << endl;
    }

     // Pop operation: Remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {