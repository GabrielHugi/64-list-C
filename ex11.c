#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a, b, c;
    printf("Escreva um numero inteiro que sera denominado como numero A \n");
    scanf("%d", &a);
    printf("Escreva um numero inteiro que sera denominado como numero B \n");
    scanf("%d", &b);
    c = a;
    printf(" \nPassando o valor do numero B para o numero A\n");
    a = b;
    printf("Passando o valor do numero A para o numero B\n \n");
    b = c;
    printf("O valor do numero A agora é %d \n", a);
    printf("O valor do numero B agora é %d \n", b);

    return 0;

}