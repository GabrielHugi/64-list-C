#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int quantos, fix, archive, matches;
tryagainlmao:
    printf("Insira quantos valores devem ser inseridos nos vetores\n");
    scanf("%d", &quantos);
    archive = quantos;
    while ((fix = getchar()) != '\n' && fix != EOF);
    if (quantos > 50) goto tryagainlmao;

    int v1[quantos], v2[quantos];

    while (quantos > 0) {
        printf("Insira um numero para o primeiro vetor\n");
        scanf("%d", &v1[quantos]);
        while ((fix = getchar()) != '\n' && fix != EOF);
        quantos--;
    }
    quantos = archive;
    while (quantos > 0) {
        printf("Insira um numero para o segundo vetor\n");
        scanf("%d", &v2[quantos]);
        while ((fix = getchar()) != '\n' && fix != EOF);
        quantos--;
    }
    quantos = archive;
    while (quantos > 0) {
        if (v1[quantos] == v2[quantos]) {
            matches++;
        }
        quantos--;
    }
    printf("%d numeros são iguais\n", matches);

    return 0;
}