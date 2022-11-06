#include <stdio.h>

int main() {

    char nome[20];
    double salfixo;
    double vendas;

    scanf("%s", nome);
    scanf("%lf\n", &salfixo);
    scanf("%lf\n", &vendas);
    
    double total = salfixo + (0.15 * vendas);

    printf("TOTAL = R$ %.2lf\n", total);
    

    return 0;
}

 