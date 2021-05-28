#include <stdio.h>

void count_down( void ) {
    //  Insert your solution here
    int count = 3105;
    while(count >= 80){
    	printf("%d\n", count);
    	count = count - 7;
    }
}

int main( void ) {
	count_down( );
	return 0;
}
