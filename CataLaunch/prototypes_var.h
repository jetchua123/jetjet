//Character that is looped to form obstacles
char PIPE = 219;
//Setting the screen size
int SCREEN_HEIGHT;
int SCREEN_WIDTH;
//Distance between pipes above and below
#define PIPE_GAP 13
//Distance of set of pipes from another
#define PIPE_DISTANCE 240
//Velocity control of bird (upward)
#define MaxVelocity 1

int birdD_X = 12, birdD_Y = 5;	//Dimension of the bird
int birdX = 0, birdY = 50; //Bird starting point
int obstacles[100000]; //Max num of Obstacles
float birdVelocity = 0; // velocity of the bird
int firstPipeX = 200; //Starting point of pipe





void Welcomepage();
void Bird();
void Obstacle();
void Projectile(float angle, float& velo);
void controls();
void Placeobstacle(int obstacle_number, int y);
void collisionCheck();
void destroyBird();
void birdMove();
void destroyObstacle(int obstacle_number, int x);


