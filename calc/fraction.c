#include <stdio.h>
#include "calc.h"

float fraction(float a, float b) {
	if (b == 0) {
		printf("WARN: division by zero, please enter valid value\n");
	}
	return a / b;
}
