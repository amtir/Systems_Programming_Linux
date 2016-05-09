/* Trivial file copy program using standard I/O library */

#include <stdlib.h>
#include <stdio.h>


void main(int argc, char *argv[]){

	int size, count, i; /* Input and output handles */
	char *buffer;
	FILE *fd;
	
	if(argc != 3){
		printf("usage: %s blocksize blockcount\n", argv[0]);
		exit(1);
	}

	fd = fopen("bufio.out","w");

	size = atoi(argv[1]);
	count = atoi(argv[2]);

	buffer = malloc(size);

	for(i=0; i<count; i++){
		fwrite(buffer, 1, size, fd);
	}
		

	fclose(fd);

}
