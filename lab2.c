#include<stdio.h>
#include<math.h>

int main()
{
    float i, j, a, b, c;
    for( i = -0.5; i >= -0.5 && i <= 0; i += 0.05){
        j = 1;
        b = 0;
        do { 
            a = pow(i, j) / j;
            b += a;
        } while (a >= 0.001 || a <= -0.001);
        c = b*(-1);
        printf("%f", c);
    }
    return 0;
}