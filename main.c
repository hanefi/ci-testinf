#include <stdio.h>
#include <stdlib.h>
#include "version.h"

int main() {

	printf("Hello, current tag is %s\n", GIT_TAG);
	printf("VERSION : %s\n", getenv("VERSION"));
	return 0;
}