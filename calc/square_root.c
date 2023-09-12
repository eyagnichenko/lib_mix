#include <stdio.h>
#include "calc.h"

// don't use math.h
float square_root(float a) {

	if (a < 0) {
		printf("ERROR: please enter valid value, which is more or equal to 0\n");
		return -1;
	}

	// look for the result with binary search
	float precision = 0.000000001;
	float left = 0;
	float right = a;
	float guess = 0;
	float check_val = 0;

	int iters = 0;
	while (iters < 100) {

		guess = (left + right) / 2;
		check_val = guess * guess - a;

		// get abs
		if (check_val < 0) {
			check_val *= -1;
		}

		if (check_val <= precision) {
			return guess;
		} 

		if (guess * guess > a) {
			right = guess;
		} else {
			left = guess;
		}

		iters++;

	}

	// return closest found value if precision not met
	return guess;
	
}
