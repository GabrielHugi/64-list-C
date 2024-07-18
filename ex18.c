#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int CODIGO;
    printf("Insira o codigo \n");
    scanf("%d", &CODIGO);
    if( CODIGO == 1 || CODIGO == 2 || CODIGO == 3) {
        switch ( CODIGO ) {
            case 1 :
            printf("Um \n");
            break;

            case 2 :
            printf("Dois \n");
            break;

            case 3 :
            printf("Tres \n");
            break;
        }
    }
    else {
        printf("Codigo inválido \n");
    }



    return 0;





}