#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int N, acimaDe5, acimaDe7, seiLa;
    printf("Insira a quantidade de alunos\n");
    scanf("%d", &N);
    seiLa = N;
    float alunos[N];
    float max;
    max = 0;
    acimaDe5 = 0;
    acimaDe7 = 0;
    while (N > 0) {
        printf("Insira a nota do aluno\n");
        scanf("%f", &alunos[N]);
        if (alunos[N] > 5) acimaDe5++;
        if (alunos[N] > 7) acimaDe7++;
        max = max + alunos[N];
        N--;
    }
    printf("Média: %g\n", max/seiLa);
    printf("Notas acima de 7: %d\n", acimaDe7);
    if (acimaDe5 == 0) {
    printf("Nenhuma nota acima de 5\n");
    }

    return 0;

}