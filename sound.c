#include <stdio.h>
#include <dos.h>

int i; // needed for beat

int main()
{
	int selected_song = 0;
	/*
	all the sounds are in the second octave
	also delay is in miliseconds and the notes are
	played acording to there hertz
	*/
reselect:
	printf("Hello World this is my music \n");
	printf("1. beat *glitchy \n");
	printf("2. all notes \n");
	printf("3. exit \n");
	scanf("%d", &selected_song);
	if(selected_song == 4) {
		printf("note: C \n");
		sound(65.41);
		delay(1000);
		nosound();
		printf("note: C#/Db \n");
		sound(69.30);
		delay(1000);
		nosound();
		printf("note: D \n");
		sound(73.42);
		delay(1000);
		nosound();
		printf("note: D#/Eb \n");
		sound(77.78);
		delay(1000);
		nosound();
		printf("note: E \n");
		sound(82.41);
		delay(1000);
		nosound();
		printf("note: F \n");
		sound(87.31);
		delay(1000);
		nosound();
		printf("note: F#/Gb \n");
		sound(92.50);
		delay(1000);
		nosound();
		printf("note: G \n");
		sound(98);
		delay(1000);
		nosound();
		printf("note: G#/Ab \n");
		sound(103.83);
		delay(1000);
		nosound();
		printf("note: A \n");
		sound(110);
		delay(1000);
		nosound();
		printf("note: A#/Bb \n");
		sound(116.54);
		delay(1000);
		nosound();
		printf("note: B \n");
		sound(123.47);
		delay(1000);
		nosound();
		goto reselect;
	}
	if(selected_song == 1) {
		printf("playing beat \n");
		for (i = 0; i < 10; i++)
		{
		delay(500);
		sound(65.41); 	
		delay(500);
		nosound();
		}
		goto reselect;
	}
	return 0;
}


