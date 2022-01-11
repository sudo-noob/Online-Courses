// _CRT_SECURE_NO_WARNINGS is required to stop the Microsoft compiler complaining
// about the use of unsafe functions. 
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 4

/* 
typedef struct cd CD;

struct cd {
char name[50];
char artist[50];
int trackcount;
int rating;
};
*/

typedef char Str50[50];

typedef struct cd {
	Str50 name;
	Str50 artist;
	int trackcount;
	int rating;
} CD;

// struct cd cd_collection[NUMBER_OF_CDS];
CD cd_collection[NUMBER_OF_CDS];

void create_cdcollection() {
	strcpy(cd_collection[0].name, "Great Hits");
	strcpy(cd_collection[0].artist, "Polly Darton");
	cd_collection[0].trackcount = 20;
	cd_collection[0].rating = 10;

	strcpy(cd_collection[1].name, "Mega Songs");
	strcpy(cd_collection[1].artist, "Lady Googoo");
	cd_collection[1].trackcount = 18;
	cd_collection[1].rating = 7;

	strcpy(cd_collection[2].name, "The Best Ones");
	strcpy(cd_collection[2].artist, "The Warthogs");
	cd_collection[2].trackcount = 24;
	cd_collection[2].rating = 4;

	strcpy(cd_collection[3].name, "Songs From The Shows");
	strcpy(cd_collection[3].artist, "The Singing Swingers");
	cd_collection[3].trackcount = 22;
	cd_collection[3].rating = 9;
}

void display_cdcollection() {
	int i;
	// 	struct cd thiscd;
	CD thiscd;
	for (i = 0; i < NUMBER_OF_CDS; i++) {
		thiscd = cd_collection[i];
		printf("%d CD #%d: '%s' by %s has %d tracks. My rating = %d\n", sizeof(CD), i, thiscd.name, thiscd.artist, thiscd.trackcount, thiscd.rating);
	}
}

int main(int argc, char **argv) {
	create_cdcollection();
	display_cdcollection();
	return 0;
}
