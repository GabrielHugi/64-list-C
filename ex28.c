#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int n;
    n = 1;
    while (n <= 2000) {
        printf("%d \n", n);
        n++;
    }

    return 0;
}