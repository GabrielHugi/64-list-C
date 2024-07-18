#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL, "");
    int random, guess, guesses, fix;
    guess = -23;
    srand(time(NULL));
    random = rand() % 100;
    while (guess != random) {
        printf("Insira um numero entre 0 e 100\n");
        scanf("%d", &guess);
        while ((fix = getchar()) != '\n' && fix != EOF) {}
        guesses++;
    }
    printf("Acerto após %d tentativa(s)\n", guesses);

    return 0;


}