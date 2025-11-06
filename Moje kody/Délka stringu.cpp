#include <stdio.h>

int main() {

    char str[] = "Ahoj";
    int pocet = 0;

    printf("%s\n", str);

    while(str[pocet] != '\0') {
        pocet++;
    }

    printf("Delka je: %d\n", pocet);

    return 0;
}