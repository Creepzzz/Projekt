/* Declare display-related functions from display_functions.c */
void display();
//void display_image(int x, const uint8_t *data);
void display_init(void);
//uint8_t spi_send_recv(uint8_t data);
char * itoaconv( int num );


#define BUTTON1 ((PORTD >> 7) & 0x1)
#define BUTTON2 ((PORTD >> 6) & 0x1)
#define BUTTON3 ((PORTD >> 5) & 0x1)
// player car
extern uint8_t car_heights[8];
extern uint8_t car_width[8];
// slow drivers
extern uint8_t obstacle_heights[8];
extern uint8_t obstacle_width[8];

void display_image(int x, const uint8_t *data);
void display_init(void);
void display_string(int line, char *s);
void display_update(void);
uint8_t spi_send_recv(uint8_t data);
void quicksleep(int cyc);

extern const uint8_t const font[128*8];
extern const uint8_t const car[8];
const uint8_t const obstacle[8];
extern char textbuffer[4][128];
//
uint8_t spi_send_recv(uint8_t data);
// Clear whole screen
void screen_clear(void);

 // Game functions
void initGame();
void tick();

//play function
void textbuffer_clear(void);
void coordinate_update(void);
void coordinate_set(int x, int y);
void coordinat_clear(int x, int y) {
void move_car(uint8_t y);
void move_obstcle();
