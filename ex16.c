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
        printf("Ambos os numeros são iguais. Seus valores são: %g \n", a);
    }
    else {
        if( a > b) {
            printf("O primeiro numero inserido é o maior. Seu valor é %g. \nO segundo numero inserido é o menor. Seu valor é %g. \n", a, b);
        }
        else {
            printf("O segundo numero inserido é o maior. Seu valor é %g. \nO primeiro numero inserido é o menor. Seu valor é %g. \n", b, a);
        }
    }

    

    return 0;








}