#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int n1, n2, operator, mediador, fix;
    printf("Insira a operação que deseja fazer. \n");
    printf("Insira 1 para verificar se um dos numeros é multiplo do outro \n");
    printf("Insira 2 para verificar se os numeros são pares \n");
    printf("Insira 3 para verificar se a media dos dois numeros é igual ou maior a 7 \n");
    scanf(" %d", &operator);

    while (( fix = getchar()) != '\n') {}

    while ( operator != 1 && operator != 2 && operator != 3 ) {
        printf("Valor invalido inserido. \n");
        printf("Reinsira o valor. \n");
        scanf(" %d", &operator);
        while (( fix = getchar()) != '\n') {}
    }

    printf("Insira o primeiro numero \n");
    scanf("%d", &n1);
    printf("Insira o segundo numero \n");
    scanf("%d", &n2);

    if (operator == 1) {
        mediador = (n1 % n2);
        if (mediador == 0) {
            printf("O primeiro numero é multiplo do segundo \n");
        }
        mediador = (n2 % n1);
        if (mediador == 0) {
            printf("O segundo numero é multiplo do primeiro \n");
        }
    }
    if (operator == 2) {
        mediador = (n1 % 2);
        if (mediador == 0) {
            printf("O primeiro numero é par \n");
        }
        else {
            printf("O primeiro numero é impar \n");
        }
        mediador = (n2 % 2);
        if (mediador == 0) {
            printf("O segundo numero é par \n");
        }
        else {
            printf("O segundo numero é impar \n");
        }
    }
    if (operator == 3) {
        mediador = ((n1+n2)/2);
        if (mediador >= 7) {
            printf("A media dos numeros é maior ou igual a sete \n");
        }
        else {
            printf("A media dos numeroes é menor do que sete \n");
        }
    }





    return 0;
















}