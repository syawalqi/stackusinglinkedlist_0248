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
             cout << "Popped value: " << top->data << endl;
            Node* temp = top; // Temporary pointer to store the top node
            top = top->next; // Update the top pointer to the next node
            delete temp; // Free memory of the popped node
        }
    }

     // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek() {
         if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
             cout << "Top value: " << top->data << endl;
        }
    }
     // IsEmpty operation: Check if the stack is empty
    bool isEmpty() {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }
};

int main() {
    Stack stack;
    int choice = 0;
    int value;
    while (choice != 4) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;