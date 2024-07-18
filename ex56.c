#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int vetor[50], pares, multiplo,n, fix;
    n = 0; pares = 0; multiplo = 0;
    while (n != 50) {
        printf("Insira um valor\n");
        scanf("%d", &vetor[n]);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        n++;
    }
    n = 0;
    while (n != 50) {
        if (vetor[n] % 2 == 0) pares++;
        if (vetor[n] % 5 == 0) multiplo++;
        n++;
    }
    printf("%d numero(s) pares.\n%d numero(s) multiplos de 5\n", pares, multiplo);

    return 0;


}