#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int firstOneBeWhere, secondOneBeWhere, fix, n;
    n = 0;
    firstOneBeWhere = 35;
    secondOneBeWhere = 35;
    char alfabetoMaiusculo[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alfabetoMinusculo[26] = "abcdefghijklmnopqrstuvwxyz";
    char letra1, letra2;
retry:
    printf("--- INSIRA AS LETRAS EM ORDEM ALFABÉTICA ---\n");
    printf("Insira uma letra\n");
    scanf("%c", &letra1);
    while ((fix = getchar())!= '\n' && fix != EOF);
    printf("Insira uma letra\n");
    scanf("%c", &letra2);
    while ((fix = getchar())!= '\n' && fix != EOF);

    // checking for first leter || procurando a primeira letra

    while (n <= 25) {
        if (letra1 == alfabetoMaiusculo[n]) {
            firstOneBeWhere = n;
            n = 26;
        }
        n++;
    }
    n = 0;
    if (firstOneBeWhere == 35) {
        while (n <= 25) {
            if (letra1 == alfabetoMinusculo[n]) {
                firstOneBeWhere = n;
                n = 26;
            }
        n++;
        }
    }
    n = 0;
    if (firstOneBeWhere == 35) {
        printf("Letra invalida inserida\n");
        goto retry;
    }

    // checking for second leter || procurando a segunda letra

    while (n <= 25) {
        if (letra2 == alfabetoMaiusculo[n]) {
            secondOneBeWhere = n;
            n = 26;
        }
        n++;
    }
    n = 0;
    if (secondOneBeWhere == 35) {
        while (n <= 25) {
            if (letra2 == alfabetoMinusculo[n]) {
                secondOneBeWhere = n;
                n = 26;
            }
        n++;
        }
    }
    n = 0;
    if (secondOneBeWhere == 35) {
        printf("Letra invalida inserida\n");
        goto retry;
    }
    if (firstOneBeWhere > secondOneBeWhere) {
        printf("Letra invalida inserida\n");
        goto retry;
    }
    firstOneBeWhere++;
    while (firstOneBeWhere < secondOneBeWhere) {
        n++;
        firstOneBeWhere++;
    }
    printf("O numero de caracteres entre eles é: %d", n);

    return 0;
}
