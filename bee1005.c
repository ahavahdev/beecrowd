#include <stdio.h>

int main() {
    double alunoA, alunoB;

    scanf("%lf", &alunoA);
    scanf("%lf", &alunoB);

    printf("MEDIA = %.5lf\n", ((alunoA * 3.5) +(alunoB * 7.5))/11);

    return 0;
}