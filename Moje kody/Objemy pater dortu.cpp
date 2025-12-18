#include <stdio.h>

float objemv(float vyska, float polomer) {
	float obsahp = 3.14 * polomer * polomer;
	return obsahp * vyska;
}

int main() {
	
	int patra = 0;
	float vyska, polomer;
	float objemd = 0;

	printf("Zadej pocet pater dortu: ");
	scanf_s("%d", &patra);
	
	for (int i = 0; i < patra; i++) {
		printf("Zadej vysku %d. valce: ", i + 1);
		scanf_s("%f", &vyska);

		printf("Zadej polomer %d. valce: ", i + 1);
		scanf_s("%f", &polomer);

		objemd += objemv(vyska, polomer);
	}
	
	printf("Celkovy objem dortu je: %0.2f\n", objemd);

	return 0;
}