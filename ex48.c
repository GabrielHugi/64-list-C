#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
setlocale (LC_ALL, "");
int idade[20];
char nome[20][30];
int atual = 0;
int lenght;
int fix = 0;
while (atual < 20) {
    printf("Insira sua idade\n");
    scanf("%d", &idade[atual]);
    while ((fix = getchar()) != '\n' && fix != EOF) {}
    printf("Insira seu nome\n");
    fgets(nome[atual], 30, stdin);
    atual++;
}
atual = 0;
while (atual < 20) {

    lenght = strlen(nome[atual]);
    if (nome[atual][lenght-1] = '\n') {
        nome[atual][lenght-1] = '\0';
    }

    if (idade[atual] >= 18 && idade[atual <= 20]) {
        printf("Candidata %s apta a concorrer\n", nome[atual]);
    }
    else {
        printf("Candidata %s inapta a concorrer\n", nome[atual]);

    }
    atual++;
}

    return 0;

}