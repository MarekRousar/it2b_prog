#include <stdio.h>

int odpocet(int h, int m, int s) {
	int cas = 86400 - (h * 3600 + m * 60 + s);
	return cas;
}


int main() {
	
	int h;
	int m;
	int s;
	
	printf("Zadej kolik je hodin: ");
	scanf_s("%d", &h);

	while (h < 1 || h > 60) {
		printf("Nesmyslny vstup!\n\n");

		printf("Zadej kolik je hodin: ");
		scanf_s("%d", &h);
	}

	printf("Zadej kolik je minut: ");
	scanf_s("%d", &m);

	while (m < 1 || m > 60) {
		printf("Nesmyslny vstup!\n\n");

		printf("Zadej kolik je minut: ");
		scanf_s("%d", &m);
	}

	printf("Zadej kolik je sekund: ");
	scanf_s("%d", &s);

	while (s < 1 || s > 60) {
		printf("Nesmyslny vstup!\n\n");

		printf("Zadej kolik je sekund: ");
		scanf_s("%d", &s);
	}

	// -----------------------------------------------------

	printf("Do pulnoci zbyva: %d vterin", odpocet(h, m, s));

	return 0;
}