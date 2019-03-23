void Projectile(float angle, float& velo){
	float veloX = velo * cos(angle);
	float veloY = velo * sin(angle);
	while(birdX < firstPipeX + 3){
		destroyBird();
		birdX++;
		birdY -= veloY; //-= SCREEN_HEIGHT - 1 - pow((birdX/veloX),2)+tan(angle);							//(0.5 * pow(birdX/veloX, 2) + veloY * (birdX / veloX) + SCREEN_HEIGHT - 1);
		veloY -= 1; //gravity
		Bird();
		collisionCheck();
		Sleep(100);
	}
		
		
}
