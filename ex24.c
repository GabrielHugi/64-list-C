#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int n1, n2, operator, mediador, fix;
    printf("Insira a opera��o que deseja fazer. \n");
    printf("Insira 1 para verificar se um dos numeros � multiplo do outro \n");
    printf("Insira 2 para verificar se os numeros s�o pares \n");
    printf("Insira 3 para verificar se a media dos dois numeros � igual ou maior a 7 \n");
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
            printf("O primeiro numero � multiplo do segundo \n");
        }
        mediador = (n2 % n1);
        if (mediador == 0) {
            printf("O segundo numero � multiplo do primeiro \n");
        }
    }
    if (operator == 2) {
        mediador = (n1 % 2);
        if (mediador == 0) {
            printf("O primeiro numero � par \n");
        }
        else {
            printf("O primeiro numero � impar \n");
        }
        mediador = (n2 % 2);
        if (mediador == 0) {
            printf("O segundo numero � par \n");
        }
        else {
            printf("O segundo numero � impar \n");
        }
    }
    if (operator == 3) {
        mediador = ((n1+n2)/2);
        if (mediador >= 7) {
            printf("A media dos numeros � maior ou igual a sete \n");
        }
        else {
            printf("A media dos numeroes � menor do que sete \n");
        }
    }





    return 0;
















}