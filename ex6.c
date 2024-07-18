#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    float temperatura;
    printf("Qual é a temperatura em celcius \n");
    scanf("%f", &temperatura);
    printf("A temperatura convertida para fahrenheit: %g \n", ((9*temperatura+160)/5));


    return 0;


}