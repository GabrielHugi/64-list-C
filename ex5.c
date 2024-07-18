#include <stdio.h>

int main() {
    float temp, vel;

    printf("Qual foi sua velocidade média em kilometros por hora na viagem \n");
    scanf("%f", &vel);
    printf("Quanto tempo em minutos voce levou na viagem \n");
    scanf("%f", &temp);
    printf("A distancia percorrida foi de %g km \n", ((temp/60)*vel));




    return 0;



}