#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale (LC_ALL, "");
    int escolha, fix, numero;
    float altura, numero2;
    char sexo;
    
    printf("1 – Conversão de Graus Celsius em Graus Fahrenheit\n2 – Conversão de Graus Fahrenheit em Graus Celsius\n3 – Peso ideal do homem\n4 – Peso ideal da mulher\n");;
    scanf("%d", &escolha);
    while ((fix = getchar()) != '\n' && fix != EOF) {}
    switch (escolha) {
        case 1:
            printf("Qual é a temperatura em celcius \n");
            scanf("%f", &numero2);
            printf("A temperatura convertida para fahrenheit: %g \n", ((9*numero2+160)/5));
        break;
        
        case 2:
            printf("Qual é a temperatura em fahrenheit \n");
            scanf("%f", &numero2);
            printf("A temperatura convertida para celsius: %g \n", ((numero2*9/5)+32));
        break;
        
        case 3:
            scanf("Insira sua altura\n");
            scanf("%f", &altura);
            printf("Insira seu peso\n");
            scanf("%f", &numero2);
            altura = numero2/(altura*altura);
            if (altura < 18.5 || altura > 24,9) {
                printf("Fora do peso idea\n");
            }
            else {
                printf("Dentro do peso idea\n");
            }
        break;
        
        case 4:
            scanf("Insira sua altura\n");
            scanf("%f", &altura);
            printf("Insira seu peso\n");
            scanf("%f", &numero2);
            altura = numero2/(altura*altura);
            if (altura < 18.5 || altura > 24,9) {
                printf("Fora do peso idea\n");
            }
            else {
                printf("Dentro do peso idea\n");
            }
        break;
        
        default:
        
        break;
    }

    return 0;
}
