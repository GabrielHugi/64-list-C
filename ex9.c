#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a,m,d;
    printf("Quantos anos você tem? \n");
    scanf("%d", &a);
    printf("Quantos meses se passaram desde o seu ultimo aniversário? \n");
    scanf("%d", &m);
    printf("Em qual dia do mês você está? \n");
    scanf("%d", &d);
    printf("A sua idade em dias é %d\n", (a*365 + m*30 + d));


    return 0;





}

