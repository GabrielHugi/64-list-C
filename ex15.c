#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float media, nota1, nota2, nota3, nota4, notaDeBobao;
    printf("Insira a sua primeira nota \n");
    scanf("%f", &nota1);
    printf("Insira a sua segunda nota \n");
    scanf("%f", &nota2);
    printf("Insira a sua terceira nota \n");
    scanf("%f", &nota3);
    printf("Insira a sua quarta nota \n");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if ( media >= 7 ) {
        printf("Você foi aprovado com media %g \n", media);
    }
    else {
        printf("Sua media ficou menor do que 7, sendo %g \n", media);
        printf("Insira a sua nota de recuperação \n");
        scanf("%f", &notaDeBobao);
        media = (media+notaDeBobao)/2;
        if (media >= 7) {
            printf("Aprovado na recuperação com media %g \n", media);
        }
        else {
            printf("Reprovado com media %g \n", media);
        }
    }




    return 0;


}