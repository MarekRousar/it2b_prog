#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

	char znak;
	
	printf("Zadej Nejaky znak: ");
	scanf_s(" %c", &znak);

	if (65 <= znak && znak <= 90) {
		printf("Znak %c je velke pismeno", znak);
	} else {
		printf("Znak %c neni velke pismeno", znak);
	}

	// Popřípadě takto: if ('A' <= znak && znak <= 'Z') {

	return 0;
}