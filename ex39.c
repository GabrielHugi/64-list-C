#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int c, fix, numero;
    char charr;
    charr = 'e';
    while (charr != 'S') {
        scanf("%d", &numero);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        if (numero % 2 == 0) {
            printf("Numero par\n");
        }
        else {
            printf("Numero impar\n");
        }
        if (numero < 0) {
            printf("Numero negativo\n");
        }
        if (numero > 0) {
            printf("Numero positivo\n");
        }
        if (numero == 0) {
            printf("Numero nulo\n");
        }



        printf("Deseja encerrar o programa\n");
        scanf("%c", &charr);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
    }
    return 0;




}