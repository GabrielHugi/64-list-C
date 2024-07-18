#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "");
    int N,n, media,maior, fix;
    printf("Quantos numeros deverão ser lidos?\n");
    scanf("%d", &N);
    int array[N];
    N--;
    n = N;
    media = 0;
    maior = 0;
    while (N >= 0) {
nuhuh:
        printf("Insira um numero\n");
        scanf("%d", &array[N]);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        if (array[N] < 0) {
            printf("Numero invalido inserido\n");
            goto nuhuh;
        }
        N--;
    }
    N++;
    while (N <= n-1) {
        if (array[N] > maior) maior = array[N];
        media += array[N];
        N++;
    }
    printf("Media: %g\nMaior numero: %d\n", media/1.0/(n+1), maior);

    return 0;
}
