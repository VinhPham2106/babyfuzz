#include <stdlib.h>
#include "baby.h"
#include <string.h>
void badFunction(char *input) {
	char buff[8];
	memcpy(buff, input, strlen(input));
}
