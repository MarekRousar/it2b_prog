#include <stdio.h>
#include <string.h>

int main() {
    
    char slovo[40];

    printf("Zadej slovo: \n");
    scanf(" %39s", slovo);

    int delka = strlen(slovo);
    
    for (int i = 0; i < delka; i++) {
        if (i % 2) {
            printf("#");
        } else {
            printf("%c", slovo[i]);
        }
    }

    return 0;
}