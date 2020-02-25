/* Declare display-related functions from display_functions.c */
void display();
//void display_image(int x, const uint8_t *data);
void display_init(void);
//uint8_t spi_send_recv(uint8_t data);
char * itoaconv( int num );


#define BUTTON1 ((PORTD >> 7) & 0x1)
#define BUTTON2 ((PORTD >> 6) & 0x1)
#define BUTTON3 ((PORTD >> 5) & 0x1)


/*
 //Declare text buffer for display output
extern char textbuffer[4][16];


// Game variables
int running;
int gameOver;
int renderCount;
int r;
int score;
int currentHighscore;

 // Game functions
void initGame();
void tick();
*/
