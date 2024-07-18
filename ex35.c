#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");
    int n;
    n = 1;
    while (n < 100) {
        printf("%d \n", n);
        if (n % 10 == 0) {
            printf("Multiplo de 10 \n");
        }
        n++;

    }


    return 0;


}