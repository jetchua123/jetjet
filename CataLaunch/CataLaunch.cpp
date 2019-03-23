
#include "prototypes_var.h"
#include <stdio.h>
#include "console.h"
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "gameover.h"
#include "Startgame.h"
#include "Welcomepage.h"
#include "Bird.h"
#include "Obstacle.h"
#include "Projectile.h"
#include "controls.h"



main(){
	getLargestWindowSize(&SCREEN_HEIGHT, &SCREEN_WIDTH);
	birdY = SCREEN_HEIGHT - 1;
	srand(time(NULL));
	Welcomepage();
	setWindowSize(SCREEN_HEIGHT, SCREEN_WIDTH);
	Startgame();
}
	









