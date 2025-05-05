#include <stdio.h>

int main(){
    float anos, meses, dias;
    int idade_dias;

    printf("Digite quantos anos voce tem: ");
    scanf("%f", &anos);
    printf("Digite quantos meses: ");
    scanf("%f", &meses);
    printf("Digite quantos dias: ");
    scanf("%f", &dias);

    idade_dias = (365 * anos) + (30 * meses) + dias;
    printf("Sua idade em dias e: %d", idade_dias);



    return 0;
}