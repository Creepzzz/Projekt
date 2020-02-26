
uint8_t car_coordinates = 16;

// Clearing the buffer of all pixels
void textbuffer_clear(void) {

	for(int j; j = 0; j < 4; j++) {

		for(int i; i = 0; i < 127; i++) {
			textbuffer[j][i] = 0;

		}

	}

}
void koordinate_update(void) {
	for(int j; j = 0; j < 4; j++) {

		DISPLAY_CHANGE_TO_COMMAND_MODE;
		spi_send_recv(0x21);
		spi_send_recv(0);	// row 0, 1, 2, 3
		spi_send_recv(127);

		DISPLAY_CHANGE_TO_DATA_MODE;

		for(int i;i = 0; i < 16; i++) {
			spi_send_recv(gamebuffer[j][i]);

		}

	}

}
// Translate X Y to page and colum and set pixels
void koordinate_set(int x, int y) {

	textbuffer[y/8][x] = textbuffer[y/8][x] | (1 << y%8);

}

// Translate X Y to page and colum and unset pixels
void koordinat_clear(int x, int y) {

	textbuffer[y/8][x] = textbuffer[y/8][x] & ~(1 << y%8);

}

void move_car(uint8_t y) {
	car_coordinates += y;
	
	// Inside bounds
	if (car_coordinates <= car_height/2 + 1)
		car_coordinates = car_heights/2 + 1;
	else if (car_coordinates >= 31 - carr_heights/2)
		player_coordinates = 31 - player_heights/2;

}

void move_obstacles() {
	// Randomize first movement
	if (obstacle_x == -1)
		Switch(rand()%3){
            case 0: 
                    obstacle_x = 122;
                    obstacle_ y = 4;
            case 1:
                    obstacle_x = 122;
                    obstacle_y = 12;
            case 2:
                    obstacle_x = 122;
                    obstacle_ y = 20;
    
    if (obstacle1_x == -1)
		Switch(rand()%3){
            case 0: 
                    obstacle1_x = 122;
                    obstacle1_ y = 10;
            case 1:
                    obstacle1_x = 122;
                    obstacle1_y = 16;
            case 2:
                    obstacle1_x = 122;
                    obstacle1_ y = 24;
	// Move according to movement array
	obstacle[0] = player_ball_movements[0][(int)player_ball_movement_pointer];


	
}
