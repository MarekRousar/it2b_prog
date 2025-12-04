#include <stdio.h>

int obvod(int x) {
	return x * 4;
}


int main() {
	
	int cislo;
	
	printf("Zadej stranu ctverce: \n");
	scanf_s("%d", &cislo);

	printf("Obvod je: %d", obvod(cislo));
}