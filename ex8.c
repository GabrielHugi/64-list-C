#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    float r, a;
    printf("Insira a altura da lata de �leo\n");
    scanf("%f", &a);
    printf("Insira o raio da lata de �leo\n");
    scanf("%f", &r);
    printf("O volume da lata de �leo � %g", (3.14159*r*r*a));





    return 0;
}