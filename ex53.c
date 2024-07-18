#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "");
    int voltas, ermWhatTheSigma, fix, medio, melhor, melhorVolta, insira;
    printf("Quantas voltas foram feitas\n");
    scanf("%d", &voltas);
    while ((fix = getchar()) != '\n' && fix != EOF) {}
    ermWhatTheSigma = voltas+1;
    melhor = 1000000000;
    medio = 0;
    while (voltas > 0) {
        printf("Insira o tempo\n");
        scanf("%d", &insira);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        if (insira < melhor) {
            melhor = insira;
            melhorVolta = ermWhatTheSigma - voltas;
        }
        medio += insira;
        voltas--;
    }
    printf("Melhor tempo: %d\nMelhor volta: %d\nTempo médio: %d\n", melhor, melhorVolta, medio/(ermWhatTheSigma-1));
    
    
    
    return 0;
}
