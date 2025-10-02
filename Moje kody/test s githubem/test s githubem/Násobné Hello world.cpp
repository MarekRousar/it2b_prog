#include <stdio.h>
int main() {

	int opakovani;

	printf("Kolikrat chces vypsat Hello world?: ");
	scanf_s("%d", &opakovani);

	if (opakovani <= 0) {
		printf("spatne zadany vstup! \n");
	} 

	for (int i = 0; i < opakovani; i++) {
		printf_s("Hello world \n");
	}
	return 0;
}