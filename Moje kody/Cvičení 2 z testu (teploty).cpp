#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int pole[10];
	int prumer = 0;
	int pod = 0;

	for (int i = 0; i < 10; i++) {
		pole[i] = rand() % 21 - 10;

		if (pole[i] < 0) {
			printf("%d\n", pole[i]);
			pod++;
		} else {
			printf("%d\n", pole[i]);
		}
	
		prumer += pole[i];

	}

	printf("Prumer je: %d\n", prumer / 10);
	printf("Pod bodem mrazu: %d\n", pod);

	return 0;
}