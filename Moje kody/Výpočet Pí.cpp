#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main() {

	srand(time(NULL));

	float x;
	float y;

	float vkruhu = 0;
	int body = 0;

	for (int i = 0; i < 1000; i++) {

		x = ((float)rand() / RAND_MAX);
		y = ((float)rand() / RAND_MAX);

		if (x * x + y * y < 1) {
			vkruhu++;
		}
		body++;
	}

	double pi = (double)vkruhu / body * 4;
	printf("Cislo Pi je: %f", pi);
	
	return 0;
}