void controls(){
	// using conio.h library, every input of the spacebar
	//raises the bird's velocity by 1
	if (kbhit()){
		char space = getch();
		if (space == ' '){
			birdVelocity = MaxVelocity;
		}

	}
}
