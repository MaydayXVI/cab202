#include <stdio.h>

void count_chars() {
    int count = 0;
    int x;
    
    while(1){
        x = getchar();
        if (x==EOF){
            break;
        }
        count++;
    }

    
    //  Declare an integer variable which will be used to count characters.
    //  Initialise the variable to zero.

    //  Enter a loop which continues indefinitely.
            // Read a single character code from standard input.

        // If the character code is equal to EOF, break out of the loop.

        // Increment the counter by 1.
    // End the body of the loop.

    // Display the number of characters processed.
    printf("The document contains %i characters.\n", count);
}


int main() {
	count_chars();
	return 0;
}
