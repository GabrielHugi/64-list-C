#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int fix;
    float poluicao;
    char charr;
    charr = 'e';
    while (charr != 'S') {
        printf("Insira o indice de poluição\n");
        scanf("%f", &poluicao);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        if(poluicao >= 0.05 && poluicao < 0.3) {
            printf("Todos os grupos podem continuar suas operações\n");
        }
        if(poluicao >= 0.3 && poluicao < 0.4) {
            printf("Grupo 1 - Suspender operações\nGrupo 2 - Continuar operações\nGrupo 3 - Continuar operações\n");
        }
        if(poluicao >= 0.4 && poluicao < 0.5) {
            printf("Grupo 1 - Suspender operações\nGrupo 2 - Suspender operações\nGrupo 3 - Continuar operações\n");
        }
        if(poluicao >= 0.5) {
            printf("Todos os grupos devem suspender suas operações\n");
        }
        printf("Deseja encerrar o programa\n");
        scanf("%c", &charr);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
    }
    return 0;




}