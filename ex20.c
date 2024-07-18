#include <stdio.h>
#include <locale.h>
#include <windows.h>


int main () {
    setlocale (LC_ALL, "");
    int a,b,c;
try_again_1:
    printf("Insira um numero maior que zero \n");
    scanf("%d", &a);
    if (a < 0) {
        printf("Valor inválido \n");
        Sleep(3000);
        goto try_again_1;
    }
try_again_2:
    printf("Insira um numero maior que zero \n");
    scanf("%d", &b);
    if (b < 0) {
        printf("Valor inválido \n");
        Sleep(3000);
        goto try_again_2;
    }
try_again_3:
    printf("Insira um numero maior que zero \n");
    scanf("%d", &c);
    if (c < 0) {
        printf("Valor inválido \n");
        Sleep(3000);
        goto try_again_3;
    }

    if (a > b && b > c) {
        printf("\n%d \n", (a*c));
        printf("%d \n", (a/c));
    }
    if (a > c && c > b) {
        printf("\n%d \n", (a*b));
        printf("%d \n", (a/b));
    }
    if (b > a && a > c) {
        printf("\n%d \n", (b*c));
        printf("%d \n", (b/c));
    }
    if (b > c && c > a) {
        printf("\n%d \n", (b*a));
        printf("%d \n", (b/a));
    }
    if (c > a && a > b) {
        printf("\n%d \n", (c*b));
        printf("%d \n", (c/a));
    }
    if (c > b && b > a) {
        printf("\n%d \n", (c*a));
        printf("%d \n", (c/a));
    }



    return 0;



}