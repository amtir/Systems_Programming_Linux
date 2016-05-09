/* A simple use of stat system function call */
/* No error checking! */

#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

void main(){

	struct stat sb; /* The stat buffer */
	stat("foo", &sb);

	printf("last accesed: %s", ctime(&sb.st_atime));
	printf("last modified: %s", ctime(&sb.st_mtime));
	printf("last change: %s", ctime(&sb.st_ctime));

}
