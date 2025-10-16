#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int znamky[10];
	srand(time(NULL));
	
	int prumer = 0;
	int nejlepsi = 1;
		
	for (int i = 0; i < 10; i++) {
			znamky[i] = rand() % 5 +1;
			prumer += znamky[i];
			printf("%d\n", znamky[i]);

			if (znamky[i] > znamky[i]) {
				nejlepsi == znamky[i];
			}
		
	}
		printf("Nejlepsi znamka: %d\n\n\n", nejlepsi);
		printf("Prumer je %0.2f: \n", (float) prumer/10);
	
	return 0;
}