#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
    setlocale (LC_ALL, "");
    int a, b;
    printf("Insira um numero \n");
    scanf("%d", &a);
    printf("Insira um numero \n");
    scanf("%d", &b);
    printf("Processando...\n");
    Sleep(2000);
    printf("Processando...\n");
    Sleep(2000);
    if (a > b) {
        printf("Resultado: %d \n", (a-b));
    }
    else {
        printf("Resultado: %d \n", (b-a));
    }

    return 0;





}