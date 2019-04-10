#include <string.h>
#include "stack.h"

int main() {
    int max_line = 105000;
	char input_buffer[max_line];
	int input_len = 0;	
	
	fgets(input_buffer, max_line, stdin);	
	input_buffer [strcspn (input_buffer, "\r\n")] = '\0';  //remove end-of-line characters

    input_len = strlen(input_buffer);
    printf("%d characters were read.\n",input_len);
    // printf("The input was: '%s'\n",input_buffer);
	fflush(stdout);
    Stack * opening_brackets_stack = createStack(max_line); 
    int error_position = 0;
    for (int position = 0; position < input_len; ++position) {
        char next = input_buffer[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
       	    Bracket bracket;
            bracket.position = position;
            switch (next){
                case '(':
                    bracket.type = ROUND;
                    break;
                case '[':
                    bracket.type = SQUARE;
                    break;
                case '{':
                    bracket.type = CURLY;
                    break;
            }
            push(opening_brackets_stack, bracket);
	}

        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
            Bracket bracket = pop(opening_brackets_stack);
            if(!((next == ')' && bracket.type == ROUND)
                || (next == ']' && bracket.type == SQUARE)
                || (next == '}' && bracket.type == CURLY))) {
                error_position = position + 1;
                break;
	    }
	}
    }

    // Printing answer, write your code here
	printf("My result is: Success\n");
	if (error_position == 0) {
        	printf("Success\n");
    	}else {
        	printf("%d\n", error_position);
    	}
    return 0;
}
