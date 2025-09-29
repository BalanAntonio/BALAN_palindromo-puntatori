#include <stdio.h>

int main(void) {
    char frase[] = "i topi non avevano nipoti";
    int lunghezza = 0;

    while (frase[lunghezza]!='\0'){ lunghezza++; } //trova lunghezza string

    char *inizio = frase, *fine = frase + lunghezza-1;

    for (int i = 0; i < lunghezza/2; i++) {
        while (*inizio == ' '){ inizio++; }
        while (*fine == ' '){ fine--; }

        if (*inizio != *fine) {
            printf("La frase non e' palindroma");
            return 0;
        }
        inizio++;
        fine--;
    }
    printf("La frase e' palindroma");

    return 0;
}