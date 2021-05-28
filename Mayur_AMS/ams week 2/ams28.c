#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <time.h>

//  Declare Global variables here.
double seq[29];
int seq_countt;
double seq_mean;
double seq_min;
double seq_max;
double seq_sum;

void array_stats() {
    
    seq_count = 0;
    double previousmax; 
    double previousmin;

    while(seq_count < 30 && scanf("%lf", &seq[seq_count]) == 1){
        seq_count++;
    }

    seq_sum = 0;

    previousmax = seq[0]; 
    for(int i = 0; i <seq_count; i++){
        seq_sum += seq[i];
        if(item[i] > previousmax){
            previousmax = seq[i];

        }
    }
        
    previousmin = seq[0];
    for(int j = 0; j < seq_count; j++){
        if(seq[j] < previousmin){
        previousmin = seq[j];
    }
    }
    if(seq_count==0){
        previousmax = 0;
           seq_mean = 0;
            previousmin=0;
    }

        seq_min = previousmin;
        if(seq_count != 0){

       seq_mean = seq_sum/seq_count; 
        }
        seq_max = previousmax;
    }
  
    //  Insert your solution here.





int main() {
    // Simulate the test setup process.
    srand( time( NULL ) );
    for ( int i = 0; i < 30; i++ ) {
        item[i] = rand();
    }
    item_count = rand();
    item_mean = rand();
    item_min = rand();
    item_max = rand();

    // Call submitted code.
    array_stats();

    // Display contents of array item.
    for (int i = 0; i < item_count; i++) {
        printf("%f ", item[i]);
    }

    printf("\n");
    printf("Item count: %d\n", item_count);
    printf("Item mean : %f\n", item_mean);
    printf("Item min  : %f\n", item_min);
    printf("Item max  : %f\n", item_max);

    return 0;
}
