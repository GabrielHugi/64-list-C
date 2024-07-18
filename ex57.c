#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "");
    int N;
    char palavra[250];
    fgets (palavra, 250, stdin);
    N = 0;
    while (N <= 250) {
        if(palavra[N] == 'a' || palavra[N] == 'A' || palavra[N] == 'e' || palavra[N] == 'E' || palavra[N] == 'i' || palavra[N] == 'I' || palavra[N] == 'o' || palavra[N] == 'O' || palavra[N] == 'u' || palavra[N] == 'U') printf("%c", palavra[N]);
        N++;
    }

    return 0;
}
