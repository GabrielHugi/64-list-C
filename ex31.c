#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int numero, totalpar, totalimpar, fix, parouimpar;
    printf("Insira um numero negativo quando quiser para a execução do programa \n");
    totalimpar = 0;
    totalpar = 0;
hehe:
    printf("Insira um numero \n");
    scanf("%d", &numero);
     while ((fix = getchar()) != '\n') {}
    if (numero < 0) {
        goto end;
    }
    parouimpar = numero % 2;
    if (parouimpar == 0) {
        printf("Numero par \n");
        totalpar = totalpar + numero;
        goto hehe;
    }
    else {
        printf("Numero impar \n");
        totalimpar = totalimpar + numero;
        goto hehe;
    }
end:
    printf("Soma dos numeros pares: %d \n", totalpar);
    printf("Soma dos numeros impares: %d \n", totalimpar);



    return 0;
}
