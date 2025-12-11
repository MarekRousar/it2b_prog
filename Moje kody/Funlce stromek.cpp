#include <stdio.h>

void trojuhelnik(int vyska, int pocet) {
	for (int l = 0; l < pocet; l++) {
		for (int i = 1; i < vyska; i++) {
			for (int j = 0; j < i; j++) {
				printf("#");
			}
			printf("\n");
		}
	}
}

void stojan(int vyska_stojan) {
	for (int i = 0; i < vyska_stojan; i++) {
		printf("#\n");
	}
	printf("####");
}

void stromek(int patra, int vyska, int pocet) {
	for (int i = 0; i < patra; i++) {
		for (int j = 0; j < pocet; j++) {
			trojuhelnik(vyska, pocet);
		}
	}
	stojan(vyska);
}

int main() {
	
	int vyska_uz;
	int vyska_stojan;
	int pocet;
	
	printf("Zadej vysku trojuhelnika: ");
	scanf_s("%d", &vyska_uz);

	printf("Zadej pocet trojuhelniku: ");
	scanf_s("%d", &pocet);

	printf("Zadej vysku stojanu: ");
	scanf_s("%d", &vyska_stojan);

	stromek(pocet, vyska_uz, vyska_stojan);

	return 0;
}