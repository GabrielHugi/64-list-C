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
        printf("Esses valores n�o podem formar um triangulo \n");
        goto end;
    }
    if ((a+c) < b) {
        printf("Esses valores n�o podem formar um triangulo \n");
        goto end;
    }
    if ((b+c) < a) {
        printf("Esses valores n�o podem formar um triangulo \n");
        goto end;
    }
    if ( a == b && b == c) {
        printf("Triangulo equil�tero \n");
    }
    else {
        if ( a == b || a ==c || c == b) {
            printf("Triangulo is�scele \n");
        }
        else {
            printf("Triangulo escaleno \n");
        }
    }








end:

    return 0;


}