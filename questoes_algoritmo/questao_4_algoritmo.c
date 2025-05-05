#include <stdio.h>

int main() {
    float altura, homens, mulheres;
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    
    homens = (72.7 * altura) - 58;
    mulheres = (62.1 * altura) - 44.7;

    printf("Peso ideal para homens: %.2f kg\n", homens);
    printf("Peso ideal para mulheres: %.2f kg\n", mulheres);
}