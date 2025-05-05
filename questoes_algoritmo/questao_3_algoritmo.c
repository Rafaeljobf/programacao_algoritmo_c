#include <stdio.h>

int main(){

    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf("Os numeros sao multiplos.\n");
    } else {
        printf("Os numeros nao sao multiplos.\n");
    }
    
    return 0;
}