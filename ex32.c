#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a, fix, vezes;
    long mediador;
    printf("Insira um numero inteiro de 0 a 10 \n");
    scanf("%d", &a);
    while ( (fix = getchar()) != '\n') {}
    while ( a < 0 || a > 10) {
        printf("Valor invalido inserido \n");
        scanf("%d", &a);
        while ( (fix = getchar()) != '\n');
    }
    vezes = 20;
    if (a % 2 != 0) {
        a = a + 1;
    }
    while (vezes > 0) {
        a = a + 2;
        mediador = mediador + (a*a);
        vezes--;




    }
    printf("%ld \n", mediador);



    return 0;


}