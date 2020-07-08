#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Add element to stack
void push(int st[], int value, short *op_status) {
	*op_status = 0;
    if (top == MAX - 1) {
    	printf("Stack overflow: you can not add an element to stack.\n");
    }
    else {
    	top++;
    	st[top] = value;
    	*op_status = 1;
    }
}

// Remove element from stack
int pop(int st[], short *op_status) {
	*op_status = 0;
	int value = 0;

	if (top==-1) {
		printf("The stack is empty.\n");
		return -1;
	}

	*op_status = 1;
	value = st[top];
	top--;
	return value;
}

// Return the value of top element of the stack
int peek(int st[], short *op_status) {
	*op_status = 0;
	if (top == -1) {
		printf("The stack is empty.\n");
	}
	*op_status = 1;
	return st[top];
}

// Display stack
void display_stack(int st[]) {
	int n = top;
	if (n == -1) {
		printf("The stack is empty.\n");
		return;
	}

	while (n > -1) {
		printf("Id: %d; Value: %d\n", n, st[n]);
		n--;
	}
}








