#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float a,b;
    printf("Insira um numero \n");
    scanf("%f", &a);
    printf("Insira um numero \n");
    scanf("%f", &b);
    if( a == b ) {
        printf("Ambos os numeros s�o iguais. Seus valores s�o: %g \n", a);
    }
    else {
        if( a > b) {
            printf("O primeiro numero inserido � o maior. Seu valor � %g. \nO segundo numero inserido � o menor. Seu valor � %g. \n", a, b);
        }
        else {
            printf("O segundo numero inserido � o maior. Seu valor � %g. \nO primeiro numero inserido � o menor. Seu valor � %g. \n", b, a);
        }
    }

    

    return 0;








}