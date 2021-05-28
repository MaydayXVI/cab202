#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <cab202_graphics.h>
#include <cab202_timers.h>

// Insert your solution to the current exercise here
bool pixel_collision(int x0, int y0, int w0, int h0, char pixels0[], int x1, int y1, int w1, int h1, char pixels1[])
{
    for(int x = x0 ; x < x0+w0 ; x++){
        for(int y = y0 ; y < y0+h0 ; y++){
           if(x>=x0 && x>=x1 && x<x0+w0 && x<x1+w1 && y >= y0 && y>=y1 && y < y0+h0 && y<y1+h1 && (pixels0[(x-x0)+(y-y0)*w0] != ' ') && (pixels1[(x-x1)+(y-y1)*w1] != ' ')){
               return true; 
            } 
        } 

    }
     return false;
}

// Insert your solution to draw_pixels here.
void draw_pixels(int left, int top, int width, int height, char bitmap[], bool space_is_transparent){
    for(int j = 0 ; j < height ; j++)
    {
        for(int i = 0 ; i < width ; i++){
            if(bitmap[i + j*width] != ' '){
                draw_char(left+i, top+j, bitmap[i + j*width]);
            }
            else if(!space_is_transparent)
            {
                draw_char(left+i, top+j, ' ');
            }
        }
    }
}


char * cross =
"y   y"
" y y "
"  y  "
" y y "
"y   y"
;

char * plus =
"  z  "
"  z  "
"zzzzz"
"  z  "
"  z  "
;

int main(void) {
    setup_screen();
    int x0 = 21, y0 = 8, w0 = 5, h0 = 5;
    int x1 = 31, y1 = 18, w1 = 5, h1 = 5;

    while (true) {
        clear_screen();

        for (int x = 0; x < screen_width(); x++) {
            for (int y = 0; y < screen_height(); y++) {
                draw_char(x, y, '.');
            }
        }

        draw_pixels(x0, y0, w0, h0, cross, true);
        draw_pixels(x1, y1, w1, h1, plus, true);

        if (pixel_collision(
            x0, y0, w0, h0, cross,
            x1, y1, w1, h1, plus
        )) {
            draw_string(0, 0, " Pixel-level collision has been detected! ");
            draw_string(0, 1, "                                          ");
        }

        show_screen();

        int key = wait_char();

        if (key == '2') {
            y1++;
        }
        else if (key == '8') {
            y1--;
        }
        else if (key == '4') {
            x1--;
        }
        else if (key == '6') {
            x1++;
        }
        else if (key == 'q') {
            break;
        }
    }

    return 0;
}