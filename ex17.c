#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a;
    printf("Insira um numero \n");
    scanf("%d", &a);
    if( a >= 0, a <= 9) {
        printf("Valor v�lido! \n");
    }
    else {
        printf("Valor inv�lido! \n");
    }




    return 0;





}