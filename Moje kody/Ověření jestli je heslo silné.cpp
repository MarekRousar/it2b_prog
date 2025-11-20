#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
	
	char heslo[40];
	int promc = 0;
	int promz = 0;
	int promV = 0;
	int promm = 0;
	
	printf("Zadej heslo pro overeni: ");
	scanf_s(" %39s", heslo, 39);

	int delka = strlen(heslo);

	for (int i = 0; i < delka; i++) {
		if (heslo[i] >= '!' && heslo[i] <= '/' || heslo[i] >= ':' && heslo[i] <= '@' || heslo[i] >= '[' && heslo[i] <= '`') {
			promz++;
		}
		if (heslo[i] >= '0' && heslo[i] <= '9') {
			promc++;
		}
		if (heslo[i] >= 'A' && heslo[i] <= 'Z') {
			promV++;
		}
		if (heslo[i] >= 'a' && heslo[i] <= 'z') {
			promm++;
		}
	}
	

	if (promz >= 1 && promc >= 1 && promV >= 2 && promm >= 3) {
		printf("Heslo je silne\n");
	} else {
		printf("Heslo neni silne\n");
	}

	return 0;
}