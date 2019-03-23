void Obstacle(){
	srand(time(NULL));
	int location;
	//randomizes and creates new values for the location of the pipes
	for (int i = 0; i <= 100000; i++){
		location=rand()%SCREEN_HEIGHT;
		if (location > SCREEN_HEIGHT - 2 * PIPE_GAP) location = SCREEN_HEIGHT / 2; 
		obstacles[i] = location;
	}
}

void destroyObstacle(int obstacle_number, int x){
	//clears previous pipe created
	for (int i=0;i != SCREEN_HEIGHT;i++){
			gotoxy(x, i);
			printf("%c", ' ');
			gotoxy(x-1,i);
			printf("%c", ' ');
			gotoxy(x-2,i);
			printf("%c", ' ');
		
	}

}

void Placeobstacle(int obstacle_number, int x){
	//places obstacles continously using loop
	textcolor(TGREEN);
	int gapStart;
	gapStart = obstacles[obstacle_number];
	for (int i=0;i != SCREEN_HEIGHT;i++){
		if (!(i >= gapStart && i < gapStart + PIPE_GAP)){
			gotoxy(x, i); 
			printf("%c", PIPE);
			gotoxy(x-1,i);
			printf("%c", PIPE);
			gotoxy(x-2,i);
			printf("%c", PIPE);
		}
	}

}

void collisionCheck(){
	//checks when the bird hits the pipe or when it hits the ground
	//triggers game over function when it does
	for (int i=0;i<=birdD_X; i++){
		for(int f=0;f<=birdD_Y;f++){
			if (getConsoleChar(birdX + i,birdY + f) == PIPE){
				gameover();
			}
		}
	}
	
	if (birdY >= SCREEN_HEIGHT) gameover();
}


