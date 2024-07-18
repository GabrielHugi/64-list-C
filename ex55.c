#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "");
    int emBranco, N;
    char palavra[50];
    emBranco = 0;
    fgets (palavra, 50, stdin);
    N = 50;
    while (N >= 0) {
        if(palavra[N] == ' ') emBranco++;
        N--;
    }
    N = 0;
    while (N <= 50) {
        if(palavra[N] != ' ') printf("%c", palavra[N]);
        N++;
    }
    printf("\n");
    printf("Espaços em branco: %d\n", emBranco);

    return 0;
}
