#include <cab202_graphics.h>
#include <cab202_timers.h>

//  Insert your solution here.
void draw_polyline(int item_x[], int item_y[], int item_count){
    clear_screen();
    for(int t = 0; t <= (item_count-2) ; t++){
        draw_line(item_x[t],item_y[t],item_x[t+1],item_y[t+1], '@');
    }
    draw_line(item_x[item_count-1],item_y[item_count-1],item_x[0],item_y[0], '@');
    show_screen();
}

#include <stdlib.h>
#include <time.h>
#include <math.h>

// Helper functions used by test driver 
void draw_test_pattern(void);
int min(int a, int b);

// Minimal test driver. Modify this to carry out tests.
int main() {
    setup_screen();
    const int WIDTH = screen_width();
    const int HEIGHT = screen_height();

    draw_test_pattern();

    // Simulate the test setup process.
    srand(time(NULL));

    int primes[] = { 3, 5, 7, 11, 13, 17, 19 };

    const int NUM_PRIMES = sizeof(primes) / sizeof(primes[0]);
    const int MAX_ITEMS = primes[NUM_PRIMES - 1];

    int x_coord[MAX_ITEMS];
    int y_coord[MAX_ITEMS];

    // Generate polygon
    int xr = WIDTH / 3;
    int yr = HEIGHT / 3;
    int x0 = xr + rand() % (WIDTH - 2 * xr);
    int y0 = yr + rand() % (HEIGHT - 2 * yr);
    int p = rand() % NUM_PRIMES;
    int step = 1 + rand() % (primes[p] - 1);

    for (int i = 0; i < primes[p]; i++) {
        double angle = 2 * M_PI * i * step / primes[p];
        x_coord[i] = x0 + round(xr * cos(angle));
        y_coord[i] = y0 + round(yr * sin(angle));
    }

    // Call submitted code.
    draw_polyline(x_coord, y_coord, primes[p]);

    timer_pause(5000);
    return 0;
}

void draw_test_pattern() {
    const int MESS = 1000;
    srand(732483);

    for (int i = 0; i < MESS; i++) {
        draw_char(rand() % screen_width(), rand() % screen_height(), 'a' + rand() % 26);
    }

    show_screen();
}

int min(int a, int b) {
    return a < b ? a : b;
}
