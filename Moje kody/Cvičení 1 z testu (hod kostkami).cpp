#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int hod1 = 0;
	int hod2 = 1;

	printf("Hody: \n");

	while (hod1 != hod2) {
		hod1 = rand() % 6 + 1;
		hod2 = rand() % 6 + 1;

		printf("%d, %d\n", hod1, hod2);
	}

	printf("Padla dvojice: %d, %d", hod1, hod2);


	return 0;
}