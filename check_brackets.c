#include <string.h>
#include "stack.h"

int main() {
    int max_line = 1024;
	char input_buffer[max_line];
	int input_len = 0;	
	
	fgets(input_buffer, max_line, stdin);	
	input_buffer [strcspn (input_buffer, "\r\n")] = '\0';  //remove end-of-line characters

    input_len = strlen(input_buffer);
    printf("%d characters were read.\n",input_len);
    printf("The input was: '%s'\n",input_buffer);
	fflush(stdout);
    Stack * opening_brackets_stack = createStack(max_line); 
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
