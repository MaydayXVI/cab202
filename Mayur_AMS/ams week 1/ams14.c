#include <stdio.h>

void echo_char_code() {
	
	char x;
	printf("Please enter one character:\n");
	scanf("%c",  &x);
	printf("The character code of '%c' is %d.\n", x, x);
    //  Insert your solution here.
}


int main() {
	echo_char_code();
	return 0;
}
