#include <avr/io.h>
#include <util/delay.h>
#include <cpu_speed.h>
#include <macros.h>
#include <graphics.h>
#include <lcd.h>

void setup( void ) {
	set_clock_speed(CPU_8MHz);

	//	(a) Initialise the LCD display using the default contrast setting
	lcd_init(LCD_DEFAULT_CONTRAST);
	//	(b) Use one of the functions declared in "graphics.h" to display 
	//	your student number, n9925201, using the background colour, 
	//	positioning the left edge of the image at 6 and the nominal top 
	//	of the text at 19.
	draw_string(6,  19, "n9925201", BG_COLOUR);
	//	(c) Use one of the functions declared in "graphics.h" to copy the contents 
	//	of the screen buffer to the LCD.
	show_screen();
}


int main(void) {
	setup();

	for ( ;; ) {
		_delay_ms(10);
	}

	return 0;
}
