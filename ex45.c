#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale (LC_ALL, "");
    int n, nOriginal, lugar, fix;
    printf("Insira quantos numeros serão inseridos\n");
    scanf("%d", &n);
    while ((fix = getchar()) != '\n' && fix != EOF) {}
    int arrayDaora[n];
    nOriginal = n;
    lugar = 0;
    while (nOriginal != 0) {
        printf("Insira um numero\n");
        scanf("%d", &arrayDaora[lugar]);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        lugar++;
        nOriginal--;
    }
    printf("\n");
    while (nOriginal != n) {
        lugar--;
        printf("%d\n", arrayDaora[lugar]);
        nOriginal++;
    }
    
    
    
    return 0;
}
