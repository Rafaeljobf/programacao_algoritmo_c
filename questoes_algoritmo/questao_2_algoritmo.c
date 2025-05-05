#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5)/10;

    printf("Sua media e: %.2f \n", media);

    if (media >= 7)
    {
        printf("Aprovado");
    }
    else if (media < 7 && media >= 4)
    {
        printf("NEF.");
    }
    else
    {
        printf("Reprovado.");
    }
    


}