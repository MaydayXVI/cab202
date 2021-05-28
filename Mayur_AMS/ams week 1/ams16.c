#include <stdio.h>
#include <ctype.h>

void word_count() {
	int Y = 0; //Number  of words
	int X = 0; //Number of lines
	int Z = 0; //Number of characters
	char previous=' ';
	int a;
	while(1){
 	a = getchar();
        if (a==EOF){
            break;
        }
        if(!isspace(a) && isspace(previous)){
        	Y++;     	
        }
        if(a == '\n'){
        	X++;
        }
        previous = a;
		Z++;
	}
	printf("Lines: %d, Words: %d, Characters: %d.\n", X, Y, Z);
    //  Insert your solution here.
}


int main() {
	word_count();
	return 0;
}