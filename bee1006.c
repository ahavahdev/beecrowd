#include <stdio.h>

int main() {
    
    double A, B, C;
    
    scanf("%lf\n", &A);
    scanf("%lf\n", &B);
    scanf("%lf\n", &C);
    
    printf("MEDIA = %.1f\n", ((A * 2) + (B * 3) + (C * 5))/10);
    
    return 0;
}