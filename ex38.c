#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int c, fix;
    float n, e;
    char charr;
    charr = 'e';
    while (charr != 'S') {
        printf("Insira o codigo de funcionario\n");
        scanf("%d", &c);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        
        printf("Insira o numero de horas trabalhadas\n");
        scanf("%f", &n);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        if (n <= 50) {
            n = n * 10.00;
        }
        else {
            e = (n-50)*20.00;
            n = 500.00;
        }
        printf("Salario total: %.2f\nSalario excedente: %.2f\n", n+e, e);

        printf("Deseja encerrar o programa\n");
        scanf("%c", &charr);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
    }
    return 0;




}