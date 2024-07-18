#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    float temperatura;
    printf("Qual é a temperatura em fahrenheit \n");
    scanf("%f", &temperatura);
    printf("A temperatura convertida para celsius: %g \n", ((temperatura*9/5)+32));


    return 0;


}