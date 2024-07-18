#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int funny[10];
    int whereTo = 0;
    int compareTo;
    while (whereTo <= 9) {
        printf("Insira um numero\n");
        scanf("%d", &funny[whereTo]);
        whereTo++;
    }
    printf("Insira o numero com o qual os outros serão comparados\n");
    scanf("%d", &compareTo);
    whereTo = 0;
    while (whereTo <= 9) {
        if (funny[whereTo] > compareTo) {
            printf("%d é maior que %d\n", funny[whereTo], compareTo);
        }
        if (funny[whereTo] < compareTo) {
            printf("%d é menor que %d\n", funny[whereTo], compareTo);
        }
        if (funny[whereTo] == compareTo) {
            printf("%d é igual a %d\n", funny[whereTo], compareTo);
        }

        whereTo++;
    }

    return 0;




}