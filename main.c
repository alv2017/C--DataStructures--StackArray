#include <stdio.h>
#include <stdlib.h>
#include "menu/menu.h"
#include "src/stack.h"

#define clear() printf("\033[H\033[J")

const char *menu[] = {
		" 1. Add element to stack.",
		" 2. Remove element from stack.",
		" 3. Return the value of the top element.",
		" 4. Display stack items.",
		" 5. Exit the program",
		NULL
};

int main(void) {
	top = -1; // top element of the stack
	short op_status = 0;
	// Menu
	short opt;
	const short MINOPT = 1;
	const short MAXOPT = get_menu_length(menu);
	clear();
	display_menu(menu);
	opt = select_option(MINOPT, MAXOPT);

	while (1) {
		printf("You have selected: %d\n", opt);
		switch (opt) {
			case 1:
				clear();
				printf("Adding a new element to stack.\n");
				int element_value = enter_value(&op_status);
				push(st, element_value, &op_status);
				break;
			case 2:
				clear();
				printf("Removing an element from stack.\n");
				int removed_value = pop(st, &op_status);
				if (op_status == 1) {
					printf("Removed element id: %d, value: %d.\n", top+1, removed_value);
				}
				break;
			case 3:
				clear();
				printf("Returning the value of the top element:\n");
				int top_element = peek(st, &op_status);
				if (op_status == 1) {
					printf("Top stack element Id: %d, value: %d.\n", top, top_element);
				}
				break;
			case 4:
				clear();
				printf("Displaying stack items.\n");
				display_stack(st);
				break;
			case 5:
				clear();
				printf("Exiting the program\n");
				return 0;
			default:
				clear();
				printf("Unknown option.\n");
				break;
		}
		// Asking user for further actions;
		display_menu(menu);
		opt = select_option(MINOPT, MAXOPT);
	}
	return 0;
}
