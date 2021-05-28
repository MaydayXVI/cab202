#include <stdio.h>
#include <stdlib.h>

//  Declare an array called rolls with capacity for 85 elements
//  of the default signed integer type.
int rolls[85];

void roll_dice( void ) {
    //  Seed the random number generator with the value 814164.
    srand(814164);
    //  Generate 85 random values between 1 and 5 inclusive. To do 
    //  this, use a counter-controlled loop which will visit every element of 
    //  rolls. The counter should start at zero, and the loop should continue 
    //  while the counter is less than 85.
    int count = 0;
    while(count < 85){

        //  Generate a random value between 1 and 5 inclusive. Store this 
        //  value in the current element of rolls - that is, the element 
        //  indexed by the loop counter.
        rolls[count] = (rand() % 5) + 1;
        count++; 
    }
    //  End the loop.
}

int main(void) {
    roll_dice();

    // Display contents of array rolls.
    for (int i = 0; i < 85; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", rolls[i]);
    }

    printf("\n");

    return 0;
}
