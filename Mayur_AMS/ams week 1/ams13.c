#include <stdio.h>

void echo_char() {
    printf("Please enter a single character:\n");
    char x = getchar();

    printf("You entered the character '%c'.\n",x);
    //  Prompt the user to enter a single character. 
    //  Use the text "Please enter a single character" followed by a single
    //  colon, and nothing else (either visible or invisible).
    //  The message should appear on a line by itself.
    //  Hint: printf.

    //  Fetch a character code from standard input.
    //  Hint: fgetc, getc, or getchar.

    //  Send the character entered by the user to the standard output 
    //  stream. Your message should take the form "You entered the character 'X'."
    //  where X is replaced by the character read earlier. The message should 
    //  be followed by a single linefeed symbol, and nothing else (either 
    //  visible or invisible).
    //  Hint: printf.
}


int main() {
	echo_char();
	return 0;
}
