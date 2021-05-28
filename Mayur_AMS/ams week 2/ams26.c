#include <stdio.h>
#include <stdlib.h>

 //  Declare an array called seq with capacity for 27 elements
	int seq[27];
//  of the default signed integer type.

void fibonacci( void ) {
	 scanf("%d", &seq[0]);
	 scanf("%d", &seq[1]);  

    int number;
    
    for(number = 2 ; number < 31 ; number++ ){
     seq[number] = seq[number - 1] + seq[number - 2]; 
    }
    // printf("%d\n", seq[number]);
    //  Insert your solution here.
}

int main(void) {
    fibonacci();

    // Display contents of array seq.
    for (int i = 0; i < 31; i++) {
        printf("%d\n", seq[i]);
    }

    return 0;
}
