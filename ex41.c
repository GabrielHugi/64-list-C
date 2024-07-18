#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    int idade;
    printf("Insira a idade\n");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("Infantil A\n");
    }
    if (idade >= 8 && idade <= 11) {
        printf("Infantil B\n");
    }
    if (idade >= 12 && idade <= 13) {
        printf("Juvenil A\n");
    }
    if (idade >= 14 && idade <= 17) {
        printf("Juvenil B\n");
    }
    if (idade >= 18) {
        printf("Adultos");
    }
    
    return 0;
    
}
