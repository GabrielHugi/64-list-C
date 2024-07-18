#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale (LC_ALL, "");
    long double x,y,z;
    int times;
    times = 63;
    x = 1;
    z = 1;
    y = 0;
    while (times != 0) {
        y = z*2;
        x = x + y;
        z = y;
        times--;
    }
    printf("%Lf", x+1);
    
    
    return 0;
    
}
