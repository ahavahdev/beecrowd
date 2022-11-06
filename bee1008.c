#include <stdio.h>

int main() {

    int nfunc, htrab;
    float valorh;

    scanf("%d\n", &nfunc);
    scanf("%d\n", &htrab);
    scanf("%f\n", &valorh);


    printf("NUMBER = %d\n", nfunc);
    printf("SALARY = U$ %.2f\n", htrab * valorh);

    return 0;
}