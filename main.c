#include <stdio.h>

int main(void) {
    char frase[] = "i topi non avevano nipoti";
    char *inizio = frase, *fine = frase;
    while (*fine!='\0'){ fine++; } //trova lunghezza string
    fine--;

    do {
        while (*inizio == ' '){ inizio++; }
        while (*fine == ' '){ fine--; }
        if (*inizio != *fine) {
            printf("La frase non e' palindroma");
            return 0;
        }
        inizio++;
        fine--;
    }while (fine>inizio);

    printf("La frase e' palindroma");

    return 0;
}