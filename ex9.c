#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a,m,d;
    printf("Quantos anos voc� tem? \n");
    scanf("%d", &a);
    printf("Quantos meses se passaram desde o seu ultimo anivers�rio? \n");
    scanf("%d", &m);
    printf("Em qual dia do m�s voc� est�? \n");
    scanf("%d", &d);
    printf("A sua idade em dias � %d\n", (a*365 + m*30 + d));


    return 0;





}

