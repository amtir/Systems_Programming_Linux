#include <fcntl.h>

void main(){

	int fd;
	fd = open("foo", O_WRONLY | O_CREAT, 0644);
	write(fd, "Hello citizen of the world :-).", 31);
	close(fd);

}
