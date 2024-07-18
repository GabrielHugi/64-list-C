#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    int max = 100;
    int fix, number;
    int threelast[3];
    int last = 0;
    int quantasvezes= 0;
    while (max > 0) {
retryIdiot:
        printf("Insira um numero inteiro positivo\n");
        scanf("%d", &number);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        if (number < 0 && number != -1) {
            printf("Numero invalido\n");
            goto retryIdiot;
        }
        if (number == -1) goto end;
        threelast[last] = number;
        threelast[last + 1] = 0;
        if (threelast[0] == 1 && threelast[1] == 3 && threelast[2] == 4) quantasvezes++;
        last++;
        if (last > 2) last = 0;
        
        max--;
    }
end:
    printf("%d\n", quantasvezes);

    return 0;
}
