#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    char sexo;
    float altura;
ong:
    printf("Qual o seu sexo? (Digite M para masculino e F para feminino) \n");
    scanf("%c", &sexo);
    if (sexo == 'M') {
        printf("Insira a sua altura \n");
        scanf("%f", &altura);
        printf("%g \n", ((72.7*altura)-58));
    }
    if (sexo == 'F') {
        printf("Insira a sua altura \n");
        scanf("%f", &altura);
        printf("%g \n", ((62.1*altura)-44.7));
    }
    if (sexo != 'F' && sexo != 'M') {
        printf("Valor invalido inserido \n");
        goto ong;
    }
    return 0;
}