#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

	char slovo[40];
	
	printf("Zadej Nejake slovo: ");
	scanf_s(" %39s", slovo, 39);

	int delka = strlen(slovo);

	for (int i = 0; i < delka; i++) {
		printf("%d\n", slovo[i]);
	}


	return 0;
}