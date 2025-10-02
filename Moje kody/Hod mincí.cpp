#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	int cislo = rand() % 2;

	int hod;

	printf("Zadej `1` pro hod minci a zadej `0` pro ukonceni programu: ");
	scanf_s("%d", &hod);

	if (hod < 0) {
		printf("Spatny vstup! \n");
	} else if (hod > 1) {
		printf("Spatny vstup! \n");
		} else if (hod == 0) {
			printf("Ukonceni programu \n");
			return 1;
			} else if (cislo == 1) {
				printf("Padla: `Panna` \n");
				} else {
					printf("Padla: `Orel` \n");
					}

	return 0;
}