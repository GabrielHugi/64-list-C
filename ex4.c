#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    int a,b,c,d;

    printf("Insira um numero \n");
    scanf("%d", &a);
    printf("Insira um numero \n");
    scanf("%d", &b);
    printf("Insira um numero \n");
    scanf("%d", &c);
    printf("Insira um numero \n");
    scanf("%d", &d);
    printf("Os resultados: \n");
    printf(" %d", (a+b));
    printf("\n %d", (a+c));
    printf("\n %d", (a+d));
    printf("\n %d", (b+c));
    printf("\n %d", (b+d));
    printf("\n %d", (c+d));
    printf("\n %d", (a*b));
    printf("\n %d", (a*c));
    printf("\n %d", (a*d));
    printf("\n %d", (b*c));
    printf("\n %d", (b*d));
    printf("\n %d", (c*d));


    return 0;


}