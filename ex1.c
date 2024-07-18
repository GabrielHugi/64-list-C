#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a, b;
    printf("Insira a quantidade de estoque minima. \n");
    scanf("%d", &a);
    printf("Insira a quantidade de estoque maxima. \n");
    scanf("%d", &b);
    printf("Estoque médio %d", ((a+b)/2));
    return 0;
}