#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    float n, ten;
    ten = 1;
    printf("Insira um numero");
    scanf("%f", &n);
    while (ten <= 10) {
        printf("%g \n", (n*ten));
        ten++;
    }

    return 0;

}