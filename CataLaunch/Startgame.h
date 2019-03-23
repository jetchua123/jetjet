

void Startgame(){
	float ang,angle;
	float velo = 10;
	Obstacle();
	Bird();
	Placeobstacle(0, firstPipeX);
	destroyObstacle(0, firstPipeX);
	/*
	gotoxy(0,0);
	printf("Angle (0-90deg)? ");
	scanf("%f",&ang);
	printf("\nVelocity? ");
	scanf("%f", &velo);
	angle = ang*M_PI/180;
	Projectile(angle, velo);*/
	int  counter=0;
	int obstacleNumber = 1;
	//continously iterates bird and pipe movement using infinite loop
	//loop breaks/ends inside collisionCheck function
	while (true){
		controls();
		destroyBird();
		birdMove();
		Bird();
		collisionCheck();
		destroyObstacle(obstacleNumber, SCREEN_WIDTH - 1 - counter);
		counter++;
		//Places another pipe after passing through a pipe
		if (counter==PIPE_DISTANCE){
			Placeobstacle(++obstacleNumber, SCREEN_WIDTH - 1);
			counter = 0;
		}
		Placeobstacle(obstacleNumber, SCREEN_WIDTH - 1 - counter);
		// displays how many times bird passes between obstacles
		gotoxy(SCREEN_WIDTH/2-7,SCREEN_HEIGHT/3);
		textcolor(TBLUE);
		printf("Current Score: ");
		gotoxy(SCREEN_WIDTH/2,SCREEN_HEIGHT/3+1);
		printf("%d",obstacleNumber-1);

	}
	
}
