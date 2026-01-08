#include <stdio.h>

int pDelka(int pole[], int delka) {
	int soucet = 0;
	for (int i = 0; i < delka; i++) {
		soucet += pole[i];
	}
	return soucet;
}

int main() {
	int pole[] = { 126, 189, 55, 302 };
	printf("delka playlistu je: %d", pDelka(pole, 4));

	return 0;
}