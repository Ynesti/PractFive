#include <stdio.h>
#include <stdlib.h>
int main () {
	//set array in cycle for
	const int ARRAY_SIZE   = 10;
	const int LEFT_BORDER  = -100;
	const int RIGHT_BORDER = 100;
	int v[ARRAY_SIZE];
	int numPositive = 0;
	for (int i=0; i<ARRAY_SIZE; i++) {
		v[i] = rand()%(RIGHT_BORDER - LEFT_BORDER + 1) + LEFT_BORDER;
	}
	
	printf("Test v5.01: OK\n");
	printf("ARRAY_SIZE: %d.\n", ARRAY_SIZE);
	printf("LEFT_BORDER: %d.\n", LEFT_BORDER);
	printf("RIGHT_BORDER: %d.\n", RIGHT_BORDER);
	//output array
	for (int i=0; i<ARRAY_SIZE; i++) {
		printf ("%d\n", v[i]);
	}
	//Calculate number of positive elements
	for (int i=0; i<ARRAY_SIZE; i++) {
		if ( v[i] > 0) {
				numPositive++; 
		}
	}
	//Printf result
	printf("Number of positive elements: %d", numPositive);
	return 0;
}
