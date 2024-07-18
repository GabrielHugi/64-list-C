#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int x;
    printf("Insira um numero\n");
    scanf("%d", &x);
    if (x < 0) {
        printf("Modulo do numero %d é igual a %d\n", x, (x*(-1)));
    }
    else {
        printf("Modulo do numero %d é igual a %d\n", x, x);
    }

    return 0;
}