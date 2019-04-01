

void Startgame(){
	float ang,angle;
	bool collide = true;
	Obstacle();
	Bird();
	float velo;
	Placeobstacle(0, firstPipeX);
	gotoxy(0,0);
	setBackgroundColor(BBLUEGREEN);
	textcolor(TBLACK);
	printf("Angle (0-90deg)? ");
	scanf("%f",&ang);
	if (ang == 69) collide = false;
	printf("\nVelocity? ");
	scanf("%f", &velo);
	angle = ang*M_PI/180;
	Projectile(angle, velo);
	int counter = SCREEN_WIDTH - firstPipeX - 1;
	int obstacleNumber = 0;



	//continously iterates bird and pipe movement using infinite loop
	//loop breaks/ends inside collisionCheck function
	while (true){
		controls();
		destroyBird();
		birdMove();
		Bird();
		if (collide) collisionCheck();
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
		if (obstacleNumber == 0) printf("%d", obstacleNumber);
		else printf("%d",obstacleNumber + 1);

	}
	
}
