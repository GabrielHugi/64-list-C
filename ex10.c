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
        printf("%d � igual a %d \n", a, b);
    }
    else {
        printf("%d n�o � igual a %d \n", a, b);
    }

    if (a >= b) {
        printf("%d � maior ou igual a %d \n", a, b);
    }

    if (a <= b) {
        printf("%d � menor ou igual a %d \n", a, b);
    }
    
    if (a > b) {
        printf("%d � maior que %d \n", a, b);
    }

    if (a < b) {
        printf("%d � menor que %d \n", a, b);
    }


    return 0;




}