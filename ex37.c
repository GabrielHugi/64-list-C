#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int fix, opcao;
    char retry = 'e';
    float n1,n2;

    while (retry != 's' && retry != 'S') {
nuhuh:
    printf("Insira um numero para escolher a opera��o\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n");
    scanf("%d", &opcao);
    while ( (fix = getchar()) != '\n' && fix != EOF ) {}
    if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) {
        printf("Valor invalido inserido.");
        goto nuhuh;
    }
    printf("Insira um numero para realizar a opera��o\n");
    scanf("%f", &n1);
    while ( (fix = getchar()) != '\n' && fix != EOF ) {}
    printf("Insira um numero para realizar a opera��o\n");
    scanf("%f", &n2);
    while ( (fix = getchar()) != '\n' && fix != EOF ) {}
    switch(opcao) {

        case 1:
            printf("Resultado: %g\n", n1+n2);
        break;

        case 2:
            printf("Resultado: %g\n", n1-n2);
        break;

        case 3:
            printf("Resultado: %g\n", n1*n2);
        break;

        case 4:
            printf("Resultado: %g\n", n1/n2);
       break;
       
    }
    printf("Insira a letra S para parar a execu��o do programa.\nInsira qualquer outra letra para continuar a execu��o.\n");
    scanf("%c", &retry);
    while ( (fix = getchar()) != '\n' && fix != EOF ) {}
    

    }
    
    return 0;



}