#include <string.h>
#include "stack.h"

int main() {
    int max_line = 1024;
	char input_buffer[max_line];
	int input_len = 0;
	printf("Input your code: ");
	fflush(stdout);
	
    input_len = getline(&input_buffer,&max_line,stdin);
    printf("%d characters were read.\n",input_len);
    printf("You typed: '%s'\n",input_buffer);
	fflush(stdout);
    Stack * opening_brackets_stack = = createStack(max_line); 
    for (int position = 0; position < input_len; ++position) {
        char next = input_buffer[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
        }

        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
        }
    }

    // Printing answer, write your code here

    return 0;
}
