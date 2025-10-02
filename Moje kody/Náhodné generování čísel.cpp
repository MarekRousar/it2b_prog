#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	// rand() generuje od 1 do 100
	int cislo = rand() % 100 + 1;
	
	printf("%d", cislo);
}