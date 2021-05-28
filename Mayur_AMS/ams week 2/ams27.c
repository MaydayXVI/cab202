#include <stdio.h>
#include <stdlib.h>

//  Declare an array called item with capacity for 25 double precision 
//  floating point values.
double item[25];
//  Declare an integer called item_count which will track the number of items
//  that have been appended to the list stored.
int item_count;
//  Declare a double precision floating point value called item_sum which will 
//  be used to remember the total sum of the items stored in the list.
double item_sum;
void array_sum() {
    //  Initially the list is empty, so assign 0 to item_count.
    item_count = 0;
    //  Append items to the list by reading from standard input until either
    //  item_count >= 25, or the value returned by scanf is not 1.
    while(item_count < 25 && scanf("%lf", &item[item_count]) == 1){
        item_count++;
    }
    //  Assign 0 to item_sum.
    item_sum = 0;
    //  Traverse the items that have been appended to the list, and accumulate 
    //  the sum in item_sum.
    for(int i = 0; i < item_count; i++){
        item_sum += item[i];
    }
}
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Simulate the test setup process.
    srand( time( NULL ) );
    for ( int i = 0; i < 25; i++ ) {
        item[i] = rand();
    }
    item_count = rand();
    item_sum = rand();

    // Call submitted code.
    array_sum();

    // Display contents of array item.
    for (int i = 0; i < item_count; i++) {
        printf("%f ", item[i]);
    }

    printf("\n");
    printf("Item count: %d\n", item_count);
    printf("Item sum  : %f\n", item_sum);

    return 0;
}
