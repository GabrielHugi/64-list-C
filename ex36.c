#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int maior,menor, hmmmm,quantasvezes;
    printf("Insira um numero\n");
    scanf("%d", &maior);
    menor = maior;
    quantasvezes = 9;
    while (quantasvezes > 0) {
        printf("Insira um numero\n");
        scanf("%d", &hmmmm);
        if (hmmmm > maior) {
            maior = hmmmm;
        }
        if (hmmmm < menor) {
            menor = hmmmm;
        }
        quantasvezes--;
    }
    printf("Maior numero: %d\nMenor numero: %d\n", maior, menor);
    return 0;
}
