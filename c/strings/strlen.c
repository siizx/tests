// RIASSUNTO:
// Buf size rimane 1024, invece strlen ritorna il numero di caratteri
#include "stdio.h"
#include <string.h>

int main(){


	char buf[1024];

	sprintf(buf, "yolo");

	int len = strlen(buf);
	int size = sizeof(buf);

	printf("buf: %s\nbuf len: %d\nsizeof(buf): %d\n", buf, len, size);


	return 0;
	}
