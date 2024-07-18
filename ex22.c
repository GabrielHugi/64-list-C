#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float a,b,c;
    printf("Insira um numero \n");
    scanf("%f", &c);
    if(c < 0) {

        printf("Transferindo o numero para a variavel b \n");
        b = c;
        printf("Numero guardado na variavel b: %g \n", b);

    }
    else {

        printf("Transferindo o numero para a variavel a \n");
        a = c;
        printf("Numero guardado na variavel a: %g \n", a);

    }


    return 0;





}