#include "stdio.h"
#include "time.h"

int main(){

	time_t date = time(NULL);

	struct tm *d = gmtime(&date);

	char oggi[40];
	strftime(oggi ,40, "%a, %d %b %Y %T GMT", d);

	printf(oggi);
	printf("\n");
	return 0;
}
