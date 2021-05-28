#include <stdio.h>

void cab_202( void ) {
	int count = 10;
    while(count <= 3520){
        
        
        if (count % 7 == 0 && count % 19 != 0){
            printf("CAB\n");
            count++;
        }
        else if ( count % 19 == 0 && count % 7 != 0){
        printf("202\n");
        count++;
    	}
    	else if (count % 7 == 0 && count % 19 == 0){
        printf("CAB202\n");
        count++;
    	}
    	else{
    		printf("%d\n", count);
    		count++;
    	}
        //  Send a linefeed to standard output.
        
        }
    // Insert your solution here.
}

int main( void ) {
	cab_202( );
	return 0;
}
