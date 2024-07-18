#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    int numero, maior, menor;
    printf("Insira um numero\n");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    while (numero != 0) {
        printf("Insira um numero\n");
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    printf("Maior = %d\nMenor = %d", maior, menor);
    
    
    return 0;
    
}
