#include <stdlib.h>
#include <cab202_graphics.h>

//  Insert your solution here.
void fill_rect(int x1, int y1, int x2, int y2,  char c){
	if((x2 < x1) || (y2 < y1)){
    return;
    }

    for(int i=y1  ; i<=y2  ;  i++){
    	draw_line(x1, i, x2, i, c);
    }

    /*for(int i = x1; i<=x2; i++){
    	for(int j = y1 ; i<=y2; j++){
    		draw_char(i , j, symbol);
    	}
    }*/
}


int main( void ) {
	int l, t, r, b;
	char c;

	printf( "Please enter the horizontal location of the left edge of the rectangle: " );
	scanf( "%d", &l );

	printf( "Please enter the vertical location of the top edge of the rectangle: " );
	scanf( "%d", &t );

	printf( "Please enter the horizontal location of the right edge of the rectangle: " );
	scanf( "%d", &r );

	printf( "Please enter the vertical location of the bottom edge of the rectangle: " );
	scanf( "%d", &b );

	printf( "Please enter the character used to draw the rectangle? " );
	scanf( " %c", &c );

	setup_screen();
	fill_rect( l, t, r, b, c );
	show_screen();
	wait_char();

	return 0;
}
