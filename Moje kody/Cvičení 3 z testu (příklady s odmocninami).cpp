#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int y = 0;
	int x = 0;
	int vysledek = 0;
	int spravne = 0;

	for (int i = 0; i < 3; i++) {
		int y = rand() % 101;
		int x = y * y;

		printf("Vypocitej odmocninu z: %d\n", x);
		scanf_s("%d", &vysledek);

		if (vysledek == y) {
			spravne++;
		}
	}

	printf("Spravne mas: %d\n", spravne);

	return 0;
}