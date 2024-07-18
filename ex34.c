#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int numero, menor, maior, fix;
    printf("Insira um numero inteiro positivo \n");
    scanf("%d", &numero);
    while ((fix = getchar()) != '\n') {}
    menor = numero;
    maior = numero;
    while (numero > 0) {
        printf("Insira um numero inteiro positivo \n");
        printf("Insira um numero negativo para parar a execução do programa \n");
        scanf("%d", &numero);
        while ((fix = getchar()) != '\n') {}
        if ( numero > 0 ) {
            if (numero < menor) {
                menor = numero;
            }
            if (numero > maior) {
                maior = numero;
            }
        }



    }
    printf("O maior numero inserido foi %d \n", maior);
    printf("O menor numero inserido foi %d \n", menor);
    return 0;


}