#include <stdio.h>

float objemv(float vyska, float polomer) {
	float obsahp = 3.14 * polomer * polomer;
	return obsahp * vyska;
}

int main() {
	
	float vyska, polomer;
	
	printf("Zadej vysku: ");
	scanf_s("%f", &vyska);

	printf("Zadej polomer: ");
	scanf_s("%f", &polomer);
	
	printf("%0.2f", objemv(vyska, polomer));
	return 0;
}