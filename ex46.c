#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale (LC_ALL, "");
    int n, nOriginal, lugar, fix;
    printf("Insira quantos numeros serão inseridos\n");
    scanf("%d", &n);
    while ((fix = getchar()) != '\n' && fix != EOF) {}
    int X[n];
    int Y[n];
    nOriginal = n;
    lugar = 0;
    while (nOriginal != 0) {
        printf("Insira um numero\n");
        scanf("%d", &X[lugar]);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        lugar++;
        nOriginal--;
    }
    lugar = 0;
    nOriginal = n;
    while (nOriginal != 0) {
        printf("Insira um numero\n");
        scanf("%d", &Y[lugar]);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        lugar++;
        nOriginal--;
    }
    lugar = 0;
    nOriginal = n;
    printf("\n");
    while (nOriginal != 0) {
        printf("%d\n", X[lugar] * Y[lugar]);
        lugar++;
        nOriginal--;
    }
    
    
    return 0;
}
