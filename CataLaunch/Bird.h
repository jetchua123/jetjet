void Bird(){
	//Prints the bird
	textcolor(TBLUEGREEN);
	if (birdY < 0) birdY = 0;
	gotoxy(birdX, birdY);
	printf("  .`.   __ \n");
	gotoxy(birdX, birdY + 1);
    printf("__;_ \\ /, >\n");
	gotoxy(birdX, birdY + 2);
    printf("--, `._) (\n");
	gotoxy(birdX, birdY + 3);
    printf(" '//,,,  |\n");
	gotoxy(birdX, birdY + 4);
    printf("      )_/\n");
}

void destroyBird(){
	//erases previously printed bird
	gotoxy(birdX,birdY);
	printf("           \n");
    printf("             \n");
    printf("          \n");
    printf("          \n");
    printf("         \n");
}

void birdMove(){
	//regulates the fall of the bird
	birdY -= birdVelocity;
	birdVelocity -= 0.1;
}
