#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    float r, a;
    printf("Insira a altura da lata de óleo\n");
    scanf("%f", &a);
    printf("Insira o raio da lata de óleo\n");
    scanf("%f", &r);
    printf("O volume da lata de óleo é %g", (3.14159*r*r*a));





    return 0;
}