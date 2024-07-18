#include <stdio.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");
    int n;
    n = 100;
    while (n < 200) {
        n++;
        printf("%d \n", n);
        n++;
    }

    return 0;
    
}