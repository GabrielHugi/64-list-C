#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float a, b;
    printf("Insira a cotação do dolar. \n");
    scanf("%f", &a);
    printf("Insira o  valor em dolar a ser convertido. \n");
    scanf("%f", &b);
    printf("O valor em reais: %g \n", (b*a));


    
    return 0;



}