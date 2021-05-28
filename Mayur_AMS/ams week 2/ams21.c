#include <stdio.h>

void list_integers( void ) {
    // Display the title message.
	printf("Counting from 52 up to 380...\n");
    //  Enter a counter-controlled loop which will start at 52 and
    //  continues up to and including 380, advancing by increments of 1. 
	int count = 52;
	while(count <= 380){
            //  Print the current value of the counter variable.
		printf("%d\n", count);
		count++;
    // End the loop.
	}
}

int main( void ) {
	list_integers( );
	return 0;
}
