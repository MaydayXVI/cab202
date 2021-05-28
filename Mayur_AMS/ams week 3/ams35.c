#include <stdlib.h>
#include <math.h>
#include <cab202_graphics.h>
#include <cab202_timers.h>

bool game_over = false;

//  Declare global variables.
double x;
double y;
double dx;
double dy;
void setup(void) {
    // Insert setup code here.
    x = 9;
    y = 12;
    double t1 = 52 - 9;
    double t2 = 18 - 12;
    double d = sqrt(t1*t1 + t2*t2);
    dx = t1*0.3/d;
    dy = t2*0.3/d;
    draw_char(9, 12, '!');
    draw_char(52, 18, '*');
    show_screen();
}

void loop(void) {
    // Insert loop code here.
    x = x + dx;
    y = y + dy;
    clear_screen();
    draw_char(52, 18, '*');
    draw_char(round(x), round(y), '!');
    if(round(x)==52 && round(y)==18){
        game_over = true;
    }
    else
    {
        game_over = false;
    }
    show_screen();

}

int main() {
    // milliseconds sleep between calls to loop.
    const int DELAY = 10;

    setup_screen();
    setup();
    show_screen();

    while (!game_over) {
        loop();
        timer_pause(DELAY);
    }

    return 0;
}
