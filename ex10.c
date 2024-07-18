#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a,b;
    printf("Insira um numero \n");
    scanf("%d", &a);
    printf("Insira um numero \n");
    scanf("%d", &b);
    if (a == b) {
        printf("%d é igual a %d \n", a, b);
    }
    else {
        printf("%d não é igual a %d \n", a, b);
    }

    if (a >= b) {
        printf("%d é maior ou igual a %d \n", a, b);
    }

    if (a <= b) {
        printf("%d é menor ou igual a %d \n", a, b);
    }
    
    if (a > b) {
        printf("%d é maior que %d \n", a, b);
    }

    if (a < b) {
        printf("%d é menor que %d \n", a, b);
    }


    return 0;




}