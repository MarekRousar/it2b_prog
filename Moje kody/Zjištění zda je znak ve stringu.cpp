#include <stdio.h>

int main() {

    char str[] = "Ahoj";
    int i = 0;
    char znak;
    int pocet = 0;
    
    printf("Zadej libovolny znak: \n");
    scanf_s(" %c", &znak);


    while(str[i] != '\0') {
        if (str[i] == znak) {
            pocet++;
        }
        i++;
    }

    if (pocet > 0) {
        printf("Znak %c JE ve stringu %s \n", znak, str);
        printf("Znak je ve stringu %d-krat", pocet);
    } else {
        printf("Znak %c NENI ve stringu %s \n", znak, str);
    }

    return 0;
}