#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int quantos, numero, fix, fatorial;
    printf("Quantos numeros deverão ser processados? \n");
    scanf("%d", &quantos);
    while ((fix = getchar()) != '\n') {}
    while (quantos > 0) {
        printf("Insira um numero \n");
        scanf("%d", &numero);
        while ((fix = getchar()) != '\n') {}
        
    for(fatorial = 1; numero > 1; numero = numero - 1) {
    fatorial = fatorial * numero;
    }
        printf("%d \n", fatorial);
        quantos--;
    }
    

    return 0;


}
