#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char arr[] = { 'a', 'b', 'c', 'd', 'e' };
	srand(time(NULL));
	int nahoda = rand() % 5;

	printf(" %c", arr[nahoda]);
	return 0;
}