#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int a, b, c;
    printf("Insira um numero \n");
    scanf("%d", &a);
    printf("Insira um numero \n");
    scanf("%d", &b);
    printf("Insira um numero \n");
    scanf("%d", &c);
    if (a >= b) {
        if (b >= c) {
            printf("%d, %d, %d \n", a, b, c);
            goto here;
        }
        else {
            printf("%d, %d, %d \n", a, c, b);
            goto here;
        }
    }
    if (b >= a) {
        if (a >= c) {
            printf("%d, %d, %d \n", b, a, c);
            goto here;
        }
        else {
            printf("%d, %d, %d \n", b, c, a);
            goto here;
        }
    }
    if (c >= a) {
        if (a >= b) {
            printf("%d, %d, %d \n", c, a, b);
            goto here;
        }
        else {
            printf("%d, %d, %d \n", c, b, a);
            goto here;
        }
    }

here:
    
    return 0;





}