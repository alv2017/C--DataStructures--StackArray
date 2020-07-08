#ifndef STACK_H
#define STACK_H

#define MAX 100 // Max stack size

// Global variables
int top; // top element of the stack
int st[MAX]; // stack array

// Insert element into stack
void push(int st[], int value, short *op_status);

// Remove top element from stack
int pop(int st[], short *op_status);

// Return the value of the first stack element
int peek(int st[], short *op_status);

// Display stack
void display_stack(int st[]);

#endif
