#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void readin(char* filename) {
	FILE* f;
	long size;
	char* b;
	size_t items_read;  				// size_t is a long unsigned int
	int linecount;
	int i;
	linecount = 0;
	f = fopen(filename, "rb");			// open file read only in binary mode
	if (f == 0) {						// get out if no good
		printf("Cannot open '%s'\n", filename);
	}
	else {
		fseek(f, 0, SEEK_END);			// seek to end of file
		size = ftell(f);				// get the current position (now at the end of the file)
		rewind(f);						// move the seek pointer to the start
		b = (char*)malloc(size);		// alloc some memory
		items_read = fread(b, 1, size, f);		// read the lot in
		fclose(f);						// close it
		for (i = 0; i < size; i++) {
			if (b[i] == '\n') {
				linecount++;
			}
		}
		printf("number of lines was %d with %d chars (%d items read).\n", linecount, i, items_read);
		free(b);
	}
}


int main(int argc, char** argv) {
	readin("sonnet.txt");
	return 0;
}
