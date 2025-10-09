#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int cislo = rand() % 2;

	int ucet = 500;
	int sazka;
	int sazka_m;
	int hod = 1;

	while (hod == 1) {
		
		if (ucet == 0) {
			printf("Tvuj ucet je 0, bohuzel nemuzes pokracovat dale.");
			return 1;
		}
		
		printf("Vitej ve hre hod minci, tvuj budget je %d minci, kolik si prejes vsadit?: ", ucet);
		scanf_s("%d", &sazka);
		printf("Prejes si to vsadit na PANU(1), nebo na ORLA(2)?: ");
		scanf_s("%d", &sazka_m);


		printf("Zadej `1` pro hod minci a zadej `0` pro ukonceni programu: ");
		scanf_s("%d", &hod);

		if (hod < 0) {
			printf("Spatny vstup! \n");
		}
		else if (hod > 1) {
			printf("Spatny vstup! \n");
		}
		else if (hod == 0) {
			printf("Ukonceni programu \n");
			return 1;
		}
		else if (cislo == 1) {
			if (sazka_m == 1) {
				sazka * 2;
				ucet = ucet + sazka;
			} else {
				ucet = ucet - sazka;
			}
			printf("Padla: `Panna` \n");
		}
		else {
			if (sazka_m == 2) {
				sazka * 2;
				ucet = ucet + sazka;
			} else {
				ucet = ucet - sazka;
			}
			printf("Padnul: `Orel` \n");
		}
	
	}
	return 0;
}