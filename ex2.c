#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float a, b;
    printf("Insira a cota��o do dolar. \n");
    scanf("%f", &a);
    printf("Insira o  valor em dolar a ser convertido. \n");
    scanf("%f", &b);
    printf("O valor em reais: %g \n", (b*a));


    
    return 0;



}