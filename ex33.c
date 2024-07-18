#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int id, fix;
    float grades, soma, alunos;
    char x;
    grades = 0;
    soma = 0;
    alunos = 0;
    while (x != 'x') {
        printf("Insira o numero de matricula do aluno \n");
        scanf("%d", &id);
        while ((fix = getchar()) != '\n') {}
        printf("Insira a nota do aluno");
        scanf("%f", &grades);
        while ((fix = getchar()) != '\n') {}
        soma = soma + grades;
        alunos = alunos + 1;
        printf("Insira x para parar a execução do programa. Insira qualquer outra letra para continuar \n");
        scanf("%c", &x);
        while ((fix = getchar()) != '\n') {}



    }
    printf("A media da turma é %g", (soma/alunos));
    return 0;
}