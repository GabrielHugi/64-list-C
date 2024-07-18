#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float a,b,c;
    printf("Coloque o valor do lado de um triangulo");
    scanf("%f", &a);
    printf("Coloque o valor do lado de um triangulo");
    scanf("%f", &b);
    printf("Coloque o valor do lado de um triangulo");
    scanf("%f", &c);
    if ((a+b) < c) {
        printf("Esses valores não podem formar um triangulo \n");
        goto end;
    }
    if ((a+c) < b) {
        printf("Esses valores não podem formar um triangulo \n");
        goto end;
    }
    if ((b+c) < a) {
        printf("Esses valores não podem formar um triangulo \n");
        goto end;
    }
    if ( a == b && b == c) {
        printf("Triangulo equilátero \n");
    }
    else {
        if ( a == b || a ==c || c == b) {
            printf("Triangulo isóscele \n");
        }
        else {
            printf("Triangulo escaleno \n");
        }
    }








end:

    return 0;


}