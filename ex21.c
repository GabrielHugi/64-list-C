#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a, b;
restart:
    printf("Insira um numero inteiro \n");
    scanf("%d", &a);
    if (a >= 0) {
        printf("Numero positivo  \n");
    filter:
        printf("Deseja continuar a execu��o do programa? (Responda com 1 para sim e 0 para n�o)\n");
        scanf("%d", &b);
        if ( b != 0 && b != 1 ) {
            printf("Valor invalido, responda com 1 para continuar a execu��o e 0 para parar a execu��o \n");
            goto filter;
        }
        if ( b == 1) {
            goto restart;
        }
        else {
            goto finish;
        }
    }
    else {
        printf("Numero negativo  \n");
    filter2:
        printf("Deseja continuar a execu��o do programa? (Responda com 1 para sim e 0 para n�o)\n");
        scanf("%d", &b);
        if ( b != 0 && b != 1 ) {
            printf("Valor invalido, responda com 1 para continuar a execu��o e 0 para parar a execu��o \n");
            goto filter2;
        }
        if ( b == 1) {
            goto restart;
        }
        else {
            goto finish;
        }
    }




finish:

    
    return 0;





}