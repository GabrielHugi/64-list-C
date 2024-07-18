#include <stdio.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "");
    int A[5], B[8], C[5], N, reps, whereInC, fix;
    reps = 0;
    whereInC = 0;
    N = 4;
    while (N >= 0) {
        printf("Insira um numero para o array A\n");
        scanf("%d", &A[N]);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        N--;
    }
    printf("\n\n");
    N = 7;
    while (N >= 0) {
        printf("Insira um numero para o array B\n");
        scanf("%d", &B[N]);
        while ((fix = getchar())!= '\n' && fix != EOF) {}
        N--;
    }
    N = 0;
    while (N <5) {
        while (reps < 8) {
            if (A[N] == B[reps]) {
                if (A[N] != C[0] && A[N] != C[1] && A[N] != C[2] && A[N] != C[3] && A[N] != C[4]) {
                    C[whereInC] = A[N];
                    whereInC++;
                }
            }
            reps++;
        }
        reps = 0;
        N++;
    }
    printf("\nResultados:\n");
    whereInC--;
    while (whereInC >= 0) {
        printf("%d\n", C[whereInC]);
        whereInC--;
    }

    return 0;
    
}
