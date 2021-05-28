#include <stdio.h>

void flag_multiples( void ) {
    //  Enter a counter controlled loop which starts at 10 and
    //  advances by increments of 1 up to and including 3520
        //  Send the current value of the counter to standard output as a 
        //  decimal formatted integer.
    int count = 10;
    while(count <= 3520){
        //  If the current value of the counter is divisible by 7 then 
        //  highlight the current line by sending the pattern " <==" to 
        //  standard output.
        printf("%d", count);
        if (count % 7 == 0){
            printf(" <===");
        }
        //  Send a linefeed to standard output.
        printf("\n");
    //  End loop.
        count++;
    }
}

int main( void ) {
	flag_multiples( );
	return 0;
}
