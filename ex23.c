#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int fix;
    float number1, number2;
    char operator;
    printf("Insira a operação que deseja fazer. \n");
    printf("Insira '+' para adição \n");
    printf("Insira '-' para subtração \n");
    printf("Insira '*' para multiplicação \n");
    printf("Insira '/' para divisão \n");
    scanf(" %c", &operator);
    while ( (fix = getchar()) != '\n');
    while ( operator != '+' && operator != '-' && operator != '*' && operator != '/' ) {
        printf("Valor invalido inserido. \n");
        printf("Reinsira o valor. \n");
        scanf(" %c", &operator);
        while ( (fix = getchar()) != '\n');
    }

    if ( operator == '+' ) {
        printf("Insira um dos numeros a serem somados \n");
        scanf("%f", &number1);
        printf("Insira um dos numeros a serem somados \n");
        scanf("%f", &number2);
        printf("Resultado: %g \n", (number1 + number2));
    }
    if ( operator == '-' ) {
        printf("Insira o numero a ser subtraido \n");
        scanf("%f", &number1);
        printf("Insira o numero a subtrair \n");
        scanf("%f", &number2);
        printf("Resultado: %g \n", (number1 - number2));
    }
    if ( operator == '*' ) {
        printf("Insira um dos numeros a serem multiplicados \n");
        scanf("%f", &number1);
        printf("Insira um dos numeros a serem multiplicados \n");
        scanf("%f", &number2);
        printf("Resultado: %g \n", (number1 * number2));
    }
    if ( operator == '/' ) {
        printf("Insira o numero a ser dividido \n");
        scanf("%f", &number1);
        printf("Insira o numero a dividir \n");
        scanf("%f", &number2);
        printf("Resultado: %g \n", (number1 / number2));
    }

    return 0;
    







}